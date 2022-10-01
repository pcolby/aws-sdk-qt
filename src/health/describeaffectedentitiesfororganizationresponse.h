// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONRESPONSE_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONRESPONSE_H

#include "healthresponse.h"
#include "describeaffectedentitiesfororganizationrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesForOrganizationResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeAffectedEntitiesForOrganizationResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeAffectedEntitiesForOrganizationResponse(const DescribeAffectedEntitiesForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAffectedEntitiesForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAffectedEntitiesForOrganizationResponse)
    Q_DISABLE_COPY(DescribeAffectedEntitiesForOrganizationResponse)

};

} // namespace Health
} // namespace QtAws

#endif
