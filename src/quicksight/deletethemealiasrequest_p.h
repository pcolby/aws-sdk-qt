// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEALIASREQUEST_P_H
#define QTAWS_DELETETHEMEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletethemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteThemeAliasRequest;

class DeleteThemeAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteThemeAliasRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteThemeAliasRequest * const q);
    DeleteThemeAliasRequestPrivate(const DeleteThemeAliasRequestPrivate &other,
                                   DeleteThemeAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
