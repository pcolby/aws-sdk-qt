// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESESSIONSREQUEST_H
#define QTAWS_DESCRIBESESSIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeSessionsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeSessionsRequest : public AppStreamRequest {

public:
    DescribeSessionsRequest(const DescribeSessionsRequest &other);
    DescribeSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSessionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
