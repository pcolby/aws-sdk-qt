// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONRESPONSE_H
#define QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "describeeventdetailsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeEventDetailsForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEventDetailsForOrganizationResponse(const DescribeEventDetailsForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventDetailsForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventDetailsForOrganizationResponse)
    Q_DISABLE_COPY(DescribeEventDetailsForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
