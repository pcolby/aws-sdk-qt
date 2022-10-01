// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCEREQUEST_P_H
#define QTAWS_ADDTAGSTORESOURCEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "addtagstoresourcerequest.h"

namespace QtAws {
namespace StorageGateway {

class AddTagsToResourceRequest;

class AddTagsToResourceRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AddTagsToResourceRequestPrivate(const StorageGatewayRequest::Action action,
                                   AddTagsToResourceRequest * const q);
    AddTagsToResourceRequestPrivate(const AddTagsToResourceRequestPrivate &other,
                                   AddTagsToResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsToResourceRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
