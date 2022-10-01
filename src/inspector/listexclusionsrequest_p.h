// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXCLUSIONSREQUEST_P_H
#define QTAWS_LISTEXCLUSIONSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listexclusionsrequest.h"

namespace QtAws {
namespace Inspector {

class ListExclusionsRequest;

class ListExclusionsRequestPrivate : public InspectorRequestPrivate {

public:
    ListExclusionsRequestPrivate(const InspectorRequest::Action action,
                                   ListExclusionsRequest * const q);
    ListExclusionsRequestPrivate(const ListExclusionsRequestPrivate &other,
                                   ListExclusionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExclusionsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
