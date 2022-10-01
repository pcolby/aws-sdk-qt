// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGREQUEST_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutStorageLensConfigurationTaggingRequest : public S3ControlRequest {

public:
    PutStorageLensConfigurationTaggingRequest(const PutStorageLensConfigurationTaggingRequest &other);
    PutStorageLensConfigurationTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStorageLensConfigurationTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
