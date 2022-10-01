// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONREQUEST_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetStorageLensConfigurationRequest : public S3ControlRequest {

public:
    GetStorageLensConfigurationRequest(const GetStorageLensConfigurationRequest &other);
    GetStorageLensConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStorageLensConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
