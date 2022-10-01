// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPEDLINKFACETREQUEST_P_H
#define QTAWS_UPDATETYPEDLINKFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "updatetypedlinkfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateTypedLinkFacetRequest;

class UpdateTypedLinkFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpdateTypedLinkFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpdateTypedLinkFacetRequest * const q);
    UpdateTypedLinkFacetRequestPrivate(const UpdateTypedLinkFacetRequestPrivate &other,
                                   UpdateTypedLinkFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTypedLinkFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
