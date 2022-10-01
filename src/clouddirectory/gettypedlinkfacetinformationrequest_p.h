// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPEDLINKFACETINFORMATIONREQUEST_P_H
#define QTAWS_GETTYPEDLINKFACETINFORMATIONREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "gettypedlinkfacetinformationrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetTypedLinkFacetInformationRequest;

class GetTypedLinkFacetInformationRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetTypedLinkFacetInformationRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetTypedLinkFacetInformationRequest * const q);
    GetTypedLinkFacetInformationRequestPrivate(const GetTypedLinkFacetInformationRequestPrivate &other,
                                   GetTypedLinkFacetInformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTypedLinkFacetInformationRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
