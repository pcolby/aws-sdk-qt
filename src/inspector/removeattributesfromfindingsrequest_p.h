// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESFROMFINDINGSREQUEST_P_H
#define QTAWS_REMOVEATTRIBUTESFROMFINDINGSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "removeattributesfromfindingsrequest.h"

namespace QtAws {
namespace Inspector {

class RemoveAttributesFromFindingsRequest;

class RemoveAttributesFromFindingsRequestPrivate : public InspectorRequestPrivate {

public:
    RemoveAttributesFromFindingsRequestPrivate(const InspectorRequest::Action action,
                                   RemoveAttributesFromFindingsRequest * const q);
    RemoveAttributesFromFindingsRequestPrivate(const RemoveAttributesFromFindingsRequestPrivate &other,
                                   RemoveAttributesFromFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveAttributesFromFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
