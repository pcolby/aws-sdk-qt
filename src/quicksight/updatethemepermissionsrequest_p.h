// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATETHEMEPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatethemepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemePermissionsRequest;

class UpdateThemePermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateThemePermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateThemePermissionsRequest * const q);
    UpdateThemePermissionsRequestPrivate(const UpdateThemePermissionsRequestPrivate &other,
                                   UpdateThemePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThemePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
