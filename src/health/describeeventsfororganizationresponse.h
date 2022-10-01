// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSFORORGANIZATIONRESPONSE_H
#define QTAWS_DESCRIBEEVENTSFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "describeeventsfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventsForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeEventsForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEventsForOrganizationResponse(const DescribeEventsForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventsForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsForOrganizationResponse)
    Q_DISABLE_COPY(DescribeEventsForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
