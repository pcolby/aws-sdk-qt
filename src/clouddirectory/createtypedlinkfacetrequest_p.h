// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPEDLINKFACETREQUEST_P_H
#define QTAWS_CREATETYPEDLINKFACETREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "createtypedlinkfacetrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateTypedLinkFacetRequest;

class CreateTypedLinkFacetRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    CreateTypedLinkFacetRequestPrivate(const CloudDirectoryRequest::Action action,
                                   CreateTypedLinkFacetRequest * const q);
    CreateTypedLinkFacetRequestPrivate(const CreateTypedLinkFacetRequestPrivate &other,
                                   CreateTypedLinkFacetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTypedLinkFacetRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
