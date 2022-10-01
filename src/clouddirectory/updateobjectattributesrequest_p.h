// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOBJECTATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATEOBJECTATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "updateobjectattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateObjectAttributesRequest;

class UpdateObjectAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpdateObjectAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpdateObjectAttributesRequest * const q);
    UpdateObjectAttributesRequestPrivate(const UpdateObjectAttributesRequestPrivate &other,
                                   UpdateObjectAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateObjectAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
