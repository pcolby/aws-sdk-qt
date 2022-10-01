// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTAGSFORRESOURCEREQUEST_P_H
#define QTAWS_SETTAGSFORRESOURCEREQUEST_P_H

#include "inspectorrequest_p.h"
#include "settagsforresourcerequest.h"

namespace QtAws {
namespace Inspector {

class SetTagsForResourceRequest;

class SetTagsForResourceRequestPrivate : public InspectorRequestPrivate {

public:
    SetTagsForResourceRequestPrivate(const InspectorRequest::Action action,
                                   SetTagsForResourceRequest * const q);
    SetTagsForResourceRequestPrivate(const SetTagsForResourceRequestPrivate &other,
                                   SetTagsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTagsForResourceRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
