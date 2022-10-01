// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSRESPONSE_H
#define QTAWS_DESCRIBEEVENTDETAILSRESPONSE_H

#include "healthresponse.h"
#include "describeeventdetailsrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsResponsePrivate;

class QTAWSHEALTH_EXPORT DescribeEventDetailsResponse : public HealthResponse {
    Q_OBJECT

public:
    DescribeEventDetailsResponse(const DescribeEventDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventDetailsResponse)
    Q_DISABLE_COPY(DescribeEventDetailsResponse)

};

} // namespace Health
} // namespace QtAws

#endif
