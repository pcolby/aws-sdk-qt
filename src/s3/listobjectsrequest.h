// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSREQUEST_H
#define QTAWS_LISTOBJECTSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListObjectsRequestPrivate;

class QTAWSS3_EXPORT ListObjectsRequest : public S3Request {

public:
    ListObjectsRequest(const ListObjectsRequest &other);
    ListObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
