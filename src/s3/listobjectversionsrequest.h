// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTVERSIONSREQUEST_H
#define QTAWS_LISTOBJECTVERSIONSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListObjectVersionsRequestPrivate;

class QTAWSS3_EXPORT ListObjectVersionsRequest : public S3Request {

public:
    ListObjectVersionsRequest(const ListObjectVersionsRequest &other);
    ListObjectVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectVersionsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
