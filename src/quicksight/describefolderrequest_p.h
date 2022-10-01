// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERREQUEST_P_H
#define QTAWS_DESCRIBEFOLDERREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describefolderrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderRequest;

class DescribeFolderRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeFolderRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeFolderRequest * const q);
    DescribeFolderRequestPrivate(const DescribeFolderRequestPrivate &other,
                                   DescribeFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFolderRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
