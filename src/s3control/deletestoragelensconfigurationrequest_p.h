// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletestoragelensconfigurationrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationRequest;

class DeleteStorageLensConfigurationRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteStorageLensConfigurationRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteStorageLensConfigurationRequest * const q);
    DeleteStorageLensConfigurationRequestPrivate(const DeleteStorageLensConfigurationRequestPrivate &other,
                                   DeleteStorageLensConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStorageLensConfigurationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
