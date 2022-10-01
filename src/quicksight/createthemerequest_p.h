// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEREQUEST_P_H
#define QTAWS_CREATETHEMEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createthemerequest.h"

namespace QtAws {
namespace QuickSight {

class CreateThemeRequest;

class CreateThemeRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateThemeRequestPrivate(const QuickSightRequest::Action action,
                                   CreateThemeRequest * const q);
    CreateThemeRequestPrivate(const CreateThemeRequestPrivate &other,
                                   CreateThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThemeRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
