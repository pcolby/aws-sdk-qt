// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGREQUEST_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetStorageLensConfigurationTaggingRequest : public S3ControlRequest {

public:
    GetStorageLensConfigurationTaggingRequest(const GetStorageLensConfigurationTaggingRequest &other);
    GetStorageLensConfigurationTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStorageLensConfigurationTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
