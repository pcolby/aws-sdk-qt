// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITEGETOBJECTRESPONSEREQUEST_H
#define QTAWS_WRITEGETOBJECTRESPONSEREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class WriteGetObjectResponseRequestPrivate;

class QTAWSS3_EXPORT WriteGetObjectResponseRequest : public S3Request {

public:
    WriteGetObjectResponseRequest(const WriteGetObjectResponseRequest &other);
    WriteGetObjectResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WriteGetObjectResponseRequest)

};

} // namespace S3
} // namespace QtAws

#endif
