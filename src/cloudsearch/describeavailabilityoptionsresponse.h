// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYOPTIONSRESPONSE_H
#define QTAWS_DESCRIBEAVAILABILITYOPTIONSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describeavailabilityoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAvailabilityOptionsResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeAvailabilityOptionsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeAvailabilityOptionsResponse(const DescribeAvailabilityOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAvailabilityOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailabilityOptionsResponse)
    Q_DISABLE_COPY(DescribeAvailabilityOptionsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
