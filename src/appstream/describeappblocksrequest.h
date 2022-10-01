// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPBLOCKSREQUEST_H
#define QTAWS_DESCRIBEAPPBLOCKSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeAppBlocksRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeAppBlocksRequest : public AppStreamRequest {

public:
    DescribeAppBlocksRequest(const DescribeAppBlocksRequest &other);
    DescribeAppBlocksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppBlocksRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
