// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTSREQUEST_H
#define QTAWS_LISTPARTSREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class ListPartsRequestPrivate;

class QTAWSS3_EXPORT ListPartsRequest : public S3Request {

public:
    ListPartsRequest(const ListPartsRequest &other);
    ListPartsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartsRequest)

};

} // namespace S3
} // namespace QtAws

#endif
