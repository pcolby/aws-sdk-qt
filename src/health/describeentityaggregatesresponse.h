// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYAGGREGATESRESPONSE_H
#define QTAWS_DESCRIBEENTITYAGGREGATESRESPONSE_H

#include "healthresponse.h"
#include "describeentityaggregatesrequest.h"

namespace QtAws {
namespace Health {

class DescribeEntityAggregatesResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeEntityAggregatesResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEntityAggregatesResponse(const DescribeEntityAggregatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEntityAggregatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntityAggregatesResponse)
    Q_DISABLE_COPY(DescribeEntityAggregatesResponse)

};

} // namespace Health
} // namespace QtAws

#endif
