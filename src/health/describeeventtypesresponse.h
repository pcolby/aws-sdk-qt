// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTYPESRESPONSE_H
#define QTAWS_DESCRIBEEVENTTYPESRESPONSE_H

#include "healthresponse.h"
#include "describeeventtypesrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventTypesResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeEventTypesResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEventTypesResponse(const DescribeEventTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventTypesResponse)
    Q_DISABLE_COPY(DescribeEventTypesResponse)

};

} // namespace Health
} // namespace QtAws

#endif
