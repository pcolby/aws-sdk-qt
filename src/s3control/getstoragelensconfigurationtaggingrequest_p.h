// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGREQUEST_P_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getstoragelensconfigurationtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationTaggingRequest;

class GetStorageLensConfigurationTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    GetStorageLensConfigurationTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   GetStorageLensConfigurationTaggingRequest * const q);
    GetStorageLensConfigurationTaggingRequestPrivate(const GetStorageLensConfigurationTaggingRequestPrivate &other,
                                   GetStorageLensConfigurationTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStorageLensConfigurationTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
