// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTBRANDINGREQUEST_P_H
#define QTAWS_DELETECLIENTBRANDINGREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deleteclientbrandingrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteClientBrandingRequest;

class DeleteClientBrandingRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteClientBrandingRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteClientBrandingRequest * const q);
    DeleteClientBrandingRequestPrivate(const DeleteClientBrandingRequestPrivate &other,
                                   DeleteClientBrandingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClientBrandingRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
