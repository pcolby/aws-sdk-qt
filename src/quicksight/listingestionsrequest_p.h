// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINGESTIONSREQUEST_P_H
#define QTAWS_LISTINGESTIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listingestionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIngestionsRequest;

class ListIngestionsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListIngestionsRequestPrivate(const QuickSightRequest::Action action,
                                   ListIngestionsRequest * const q);
    ListIngestionsRequestPrivate(const ListIngestionsRequestPrivate &other,
                                   ListIngestionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIngestionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
