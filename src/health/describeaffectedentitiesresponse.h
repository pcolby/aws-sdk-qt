// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESRESPONSE_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESRESPONSE_H

#include "healthresponse.h"
#include "describeaffectedentitiesrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeAffectedEntitiesResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeAffectedEntitiesResponse(const DescribeAffectedEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAffectedEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAffectedEntitiesResponse)
    Q_DISABLE_COPY(DescribeAffectedEntitiesResponse)

};

} // namespace Health
} // namespace QtAws

#endif
