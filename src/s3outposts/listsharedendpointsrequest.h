// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDENDPOINTSREQUEST_H
#define QTAWS_LISTSHAREDENDPOINTSREQUEST_H

#include "s3outpostsrequest.h"

namespace QtAws {
namespace S3Outposts {

class ListSharedEndpointsRequestPrivate;

class QTAWSS3OUTPOSTS_EXPORT ListSharedEndpointsRequest : public S3OutpostsRequest {

public:
    ListSharedEndpointsRequest(const ListSharedEndpointsRequest &other);
    ListSharedEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSharedEndpointsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
