// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putstoragelensconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationRequest;

class PutStorageLensConfigurationRequestPrivate : public S3ControlRequestPrivate {

public:
    PutStorageLensConfigurationRequestPrivate(const S3ControlRequest::Action action,
                                   PutStorageLensConfigurationRequest * const q);
    PutStorageLensConfigurationRequestPrivate(const PutStorageLensConfigurationRequestPrivate &other,
                                   PutStorageLensConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutStorageLensConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
