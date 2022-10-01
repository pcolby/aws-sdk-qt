// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEREQUEST_P_H
#define QTAWS_DELETETHEMEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletethemerequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteThemeRequest;

class DeleteThemeRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteThemeRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteThemeRequest * const q);
    DeleteThemeRequestPrivate(const DeleteThemeRequestPrivate &other,
                                   DeleteThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThemeRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
