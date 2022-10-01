// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEBUILDERSREQUEST_H
#define QTAWS_DESCRIBEIMAGEBUILDERSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImageBuildersRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeImageBuildersRequest : public AppStreamRequest {

public:
    DescribeImageBuildersRequest(const DescribeImageBuildersRequest &other);
    DescribeImageBuildersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageBuildersRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
