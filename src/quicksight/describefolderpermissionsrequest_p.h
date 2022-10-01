// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEFOLDERPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describefolderpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderPermissionsRequest;

class DescribeFolderPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeFolderPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeFolderPermissionsRequest * const q);
    DescribeFolderPermissionsRequestPrivate(const DescribeFolderPermissionsRequestPrivate &other,
                                   DescribeFolderPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFolderPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
