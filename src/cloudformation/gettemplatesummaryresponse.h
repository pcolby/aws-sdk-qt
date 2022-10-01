// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESUMMARYRESPONSE_H
#define QTAWS_GETTEMPLATESUMMARYRESPONSE_H

#include "cloudformationresponse.h"
#include "gettemplatesummaryrequest.h"

namespace QtAws {
namespace CloudFormation {

class GetTemplateSummaryResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT GetTemplateSummaryResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    GetTemplateSummaryResponse(const GetTemplateSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTemplateSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateSummaryResponse)
    Q_DISABLE_COPY(GetTemplateSummaryResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
