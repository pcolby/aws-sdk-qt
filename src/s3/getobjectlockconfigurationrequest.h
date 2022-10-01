// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLOCKCONFIGURATIONREQUEST_H
#define QTAWS_GETOBJECTLOCKCONFIGURATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectLockConfigurationRequestPrivate;

class QTAWSS3_EXPORT GetObjectLockConfigurationRequest : public S3Request {

public:
    GetObjectLockConfigurationRequest(const GetObjectLockConfigurationRequest &other);
    GetObjectLockConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectLockConfigurationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
