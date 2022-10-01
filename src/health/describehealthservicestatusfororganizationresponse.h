// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONRESPONSE_H
#define QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "describehealthservicestatusfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeHealthServiceStatusForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeHealthServiceStatusForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeHealthServiceStatusForOrganizationResponse(const DescribeHealthServiceStatusForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHealthServiceStatusForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHealthServiceStatusForOrganizationResponse)
    Q_DISABLE_COPY(DescribeHealthServiceStatusForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
