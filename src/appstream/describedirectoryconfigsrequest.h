// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORYCONFIGSREQUEST_H
#define QTAWS_DESCRIBEDIRECTORYCONFIGSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeDirectoryConfigsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeDirectoryConfigsRequest : public AppStreamRequest {

public:
    DescribeDirectoryConfigsRequest(const DescribeDirectoryConfigsRequest &other);
    DescribeDirectoryConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDirectoryConfigsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
