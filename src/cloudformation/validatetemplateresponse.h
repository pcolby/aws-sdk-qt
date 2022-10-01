// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATETEMPLATERESPONSE_H
#define QTAWS_VALIDATETEMPLATERESPONSE_H

#include "cloudformationresponse.h"
#include "validatetemplaterequest.h"

namespace QtAws {
namespace CloudFormation {

class ValidateTemplateResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ValidateTemplateResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ValidateTemplateResponse(const ValidateTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateTemplateResponse)
    Q_DISABLE_COPY(ValidateTemplateResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
