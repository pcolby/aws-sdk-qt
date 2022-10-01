// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTAGGREGATESRESPONSE_H
#define QTAWS_DESCRIBEEVENTAGGREGATESRESPONSE_H

#include "healthresponse.h"
#include "describeeventaggregatesrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventAggregatesResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeEventAggregatesResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEventAggregatesResponse(const DescribeEventAggregatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventAggregatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventAggregatesResponse)
    Q_DISABLE_COPY(DescribeEventAggregatesResponse)

};

} // namespace Health
} // namespace QtAws

#endif
