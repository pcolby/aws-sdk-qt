// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSREQUEST_H
#define QTAWS_DESCRIBEENDPOINTSREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeEndpointsRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT DescribeEndpointsRequest : public TimestreamQueryRequest {

public:
    DescribeEndpointsRequest(const DescribeEndpointsRequest &other);
    DescribeEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointsRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
