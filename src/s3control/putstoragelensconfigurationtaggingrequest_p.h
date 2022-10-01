// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGREQUEST_P_H
#define QTAWS_PUTSTORAGELENSCONFIGURATIONTAGGINGREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putstoragelensconfigurationtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class PutStorageLensConfigurationTaggingRequest;

class PutStorageLensConfigurationTaggingRequestPrivate : public S3ControlRequestPrivate {

public:
    PutStorageLensConfigurationTaggingRequestPrivate(const S3ControlRequest::Action action,
                                   PutStorageLensConfigurationTaggingRequest * const q);
    PutStorageLensConfigurationTaggingRequestPrivate(const PutStorageLensConfigurationTaggingRequestPrivate &other,
                                   PutStorageLensConfigurationTaggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutStorageLensConfigurationTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
