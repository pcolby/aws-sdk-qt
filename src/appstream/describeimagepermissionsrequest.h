// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEIMAGEPERMISSIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImagePermissionsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeImagePermissionsRequest : public AppStreamRequest {

public:
    DescribeImagePermissionsRequest(const DescribeImagePermissionsRequest &other);
    DescribeImagePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImagePermissionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
