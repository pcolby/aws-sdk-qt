// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEALIASREQUEST_P_H
#define QTAWS_UPDATETHEMEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatethemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemeAliasRequest;

class UpdateThemeAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateThemeAliasRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateThemeAliasRequest * const q);
    UpdateThemeAliasRequestPrivate(const UpdateThemeAliasRequestPrivate &other,
                                   UpdateThemeAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
