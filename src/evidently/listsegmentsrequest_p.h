// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTSREQUEST_P_H
#define QTAWS_LISTSEGMENTSREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "listsegmentsrequest.h"

namespace QtAws {
namespace Evidently {

class ListSegmentsRequest;

class ListSegmentsRequestPrivate : public EvidentlyRequestPrivate {

public:
    ListSegmentsRequestPrivate(const EvidentlyRequest::Action action,
                                   ListSegmentsRequest * const q);
    ListSegmentsRequestPrivate(const ListSegmentsRequestPrivate &other,
                                   ListSegmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSegmentsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
