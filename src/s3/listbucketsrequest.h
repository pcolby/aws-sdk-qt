// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETSREQUEST_H
#define QTAWS_LISTBUCKETSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListBucketsRequestPrivate;

class QTAWSS3_EXPORT ListBucketsRequest : public S3Request {

public:
    ListBucketsRequest(const ListBucketsRequest &other);
    ListBucketsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
