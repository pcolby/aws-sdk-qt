// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATERESPONSE_H
#define QTAWS_GETTEMPLATERESPONSE_H

#include "cloudformationresponse.h"
#include "gettemplaterequest.h"

namespace QtAws {
namespace CloudFormation {

class GetTemplateResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT GetTemplateResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    GetTemplateResponse(const GetTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateResponse)
    Q_DISABLE_COPY(GetTemplateResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
