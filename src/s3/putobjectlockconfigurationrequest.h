// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLOCKCONFIGURATIONREQUEST_H
#define QTAWS_PUTOBJECTLOCKCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutObjectLockConfigurationRequestPrivate;

class QTAWSS3_EXPORT PutObjectLockConfigurationRequest : public S3Request {

public:
    PutObjectLockConfigurationRequest(const PutObjectLockConfigurationRequest &other);
    PutObjectLockConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectLockConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
