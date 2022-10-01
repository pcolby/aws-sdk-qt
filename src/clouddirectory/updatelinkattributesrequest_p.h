// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATELINKATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "updatelinkattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateLinkAttributesRequest;

class UpdateLinkAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpdateLinkAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpdateLinkAttributesRequest * const q);
    UpdateLinkAttributesRequestPrivate(const UpdateLinkAttributesRequestPrivate &other,
                                   UpdateLinkAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLinkAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
