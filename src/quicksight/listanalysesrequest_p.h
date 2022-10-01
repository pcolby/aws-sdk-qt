// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYSESREQUEST_P_H
#define QTAWS_LISTANALYSESREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listanalysesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListAnalysesRequest;

class ListAnalysesRequestPrivate : public QuickSightRequestPrivate {

public:
    ListAnalysesRequestPrivate(const QuickSightRequest::Action action,
                                   ListAnalysesRequest * const q);
    ListAnalysesRequestPrivate(const ListAnalysesRequestPrivate &other,
                                   ListAnalysesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnalysesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
