// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPARTUPLOADSREQUEST_H
#define QTAWS_LISTMULTIPARTUPLOADSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListMultipartUploadsRequestPrivate;

class QTAWSS3_EXPORT ListMultipartUploadsRequest : public S3Request {

public:
    ListMultipartUploadsRequest(const ListMultipartUploadsRequest &other);
    ListMultipartUploadsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultipartUploadsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
