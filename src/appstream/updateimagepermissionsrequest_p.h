// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEIMAGEPERMISSIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "updateimagepermissionsrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateImagePermissionsRequest;

class UpdateImagePermissionsRequestPrivate : public AppStreamRequestPrivate {

public:
    UpdateImagePermissionsRequestPrivate(const AppStreamRequest::Action action,
                                   UpdateImagePermissionsRequest * const q);
    UpdateImagePermissionsRequestPrivate(const UpdateImagePermissionsRequestPrivate &other,
                                   UpdateImagePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateImagePermissionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
