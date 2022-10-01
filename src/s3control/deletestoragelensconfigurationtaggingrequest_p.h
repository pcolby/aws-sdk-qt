// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGELENSCONFIGURATIONTAGGINGREQUEST_P_H
#define QTAWS_DELETESTORAGELENSCONFIGURATIONTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deletestoragelensconfigurationtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteStorageLensConfigurationTaggingRequest;

class DeleteStorageLensConfigurationTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteStorageLensConfigurationTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteStorageLensConfigurationTaggingRequest * const q);
    DeleteStorageLensConfigurationTaggingRequestPrivate(const DeleteStorageLensConfigurationTaggingRequestPrivate &other,
                                   DeleteStorageLensConfigurationTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStorageLensConfigurationTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
