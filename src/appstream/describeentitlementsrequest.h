// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITLEMENTSREQUEST_H
#define QTAWS_DESCRIBEENTITLEMENTSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeEntitlementsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeEntitlementsRequest : public AppStreamRequest {

public:
    DescribeEntitlementsRequest(const DescribeEntitlementsRequest &other);
    DescribeEntitlementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntitlementsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
