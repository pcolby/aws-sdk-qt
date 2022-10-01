// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describefolderresolvedpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderResolvedPermissionsRequest;

class DescribeFolderResolvedPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeFolderResolvedPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeFolderResolvedPermissionsRequest * const q);
    DescribeFolderResolvedPermissionsRequestPrivate(const DescribeFolderResolvedPermissionsRequestPrivate &other,
                                   DescribeFolderResolvedPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFolderResolvedPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
