// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTREFERENCESREQUEST_P_H
#define QTAWS_LISTSEGMENTREFERENCESREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "listsegmentreferencesrequest.h"

namespace QtAws {
namespace Evidently {

class ListSegmentReferencesRequest;

class ListSegmentReferencesRequestPrivate : public EvidentlyRequestPrivate {

public:
    ListSegmentReferencesRequestPrivate(const EvidentlyRequest::Action action,
                                   ListSegmentReferencesRequest * const q);
    ListSegmentReferencesRequestPrivate(const ListSegmentReferencesRequestPrivate &other,
                                   ListSegmentReferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSegmentReferencesRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
