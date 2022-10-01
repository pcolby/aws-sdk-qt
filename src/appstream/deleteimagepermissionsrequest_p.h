// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPERMISSIONSREQUEST_P_H
#define QTAWS_DELETEIMAGEPERMISSIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deleteimagepermissionsrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImagePermissionsRequest;

class DeleteImagePermissionsRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteImagePermissionsRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteImagePermissionsRequest * const q);
    DeleteImagePermissionsRequestPrivate(const DeleteImagePermissionsRequestPrivate &other,
                                   DeleteImagePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImagePermissionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
