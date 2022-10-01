// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSV2REQUEST_H
#define QTAWS_LISTOBJECTSV2REQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListObjectsV2RequestPrivate;

class QTAWSS3_EXPORT ListObjectsV2Request : public S3Request {

public:
    ListObjectsV2Request(const ListObjectsV2Request &other);
    ListObjectsV2Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectsV2Request)

};

} // namespace S3
} // namespace QtAws

#endif
