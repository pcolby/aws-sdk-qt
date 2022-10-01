// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPEDLINKFACETREQUEST_P_H
#define QTAWS_DELETETYPEDLINKFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "deletetypedlinkfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteTypedLinkFacetRequest;

class DeleteTypedLinkFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DeleteTypedLinkFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DeleteTypedLinkFacetRequest * const q);
    DeleteTypedLinkFacetRequestPrivate(const DeleteTypedLinkFacetRequestPrivate &other,
                                   DeleteTypedLinkFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTypedLinkFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
