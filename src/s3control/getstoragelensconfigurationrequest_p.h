// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTORAGELENSCONFIGURATIONREQUEST_P_H
#define QTAWS_GETSTORAGELENSCONFIGURATIONREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getstoragelensconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class GetStorageLensConfigurationRequest;

class GetStorageLensConfigurationRequestPrivate : public S3ControlRequestPrivate {

public:
    GetStorageLensConfigurationRequestPrivate(const S3ControlRequest::Action action,
                                   GetStorageLensConfigurationRequest * const q);
    GetStorageLensConfigurationRequestPrivate(const GetStorageLensConfigurationRequestPrivate &other,
                                   GetStorageLensConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStorageLensConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
