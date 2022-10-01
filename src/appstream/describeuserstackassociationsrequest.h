// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSTACKASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBEUSERSTACKASSOCIATIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeUserStackAssociationsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeUserStackAssociationsRequest : public AppStreamRequest {

public:
    DescribeUserStackAssociationsRequest(const DescribeUserStackAssociationsRequest &other);
    DescribeUserStackAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserStackAssociationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
