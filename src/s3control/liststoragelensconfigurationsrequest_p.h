// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTORAGELENSCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTSTORAGELENSCONFIGURATIONSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "liststoragelensconfigurationsrequest.h"

namespace QtAws {
namespace S3Control {

class ListStorageLensConfigurationsRequest;

class ListStorageLensConfigurationsRequestPrivate : public S3ControlRequestPrivate {

public:
    ListStorageLensConfigurationsRequestPrivate(const S3ControlRequest::Action action,
                                   ListStorageLensConfigurationsRequest * const q);
    ListStorageLensConfigurationsRequestPrivate(const ListStorageLensConfigurationsRequestPrivate &other,
                                   ListStorageLensConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStorageLensConfigurationsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
