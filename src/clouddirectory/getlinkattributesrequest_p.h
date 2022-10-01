// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKATTRIBUTESREQUEST_P_H
#define QTAWS_GETLINKATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getlinkattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetLinkAttributesRequest;

class GetLinkAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetLinkAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetLinkAttributesRequest * const q);
    GetLinkAttributesRequestPrivate(const GetLinkAttributesRequestPrivate &other,
                                   GetLinkAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLinkAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
