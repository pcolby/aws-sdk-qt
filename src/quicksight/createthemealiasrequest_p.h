// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEALIASREQUEST_P_H
#define QTAWS_CREATETHEMEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createthemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateThemeAliasRequest;

class CreateThemeAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateThemeAliasRequestPrivate(const QuickSightRequest::Action action,
                                   CreateThemeAliasRequest * const q);
    CreateThemeAliasRequestPrivate(const CreateThemeAliasRequestPrivate &other,
                                   CreateThemeAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
