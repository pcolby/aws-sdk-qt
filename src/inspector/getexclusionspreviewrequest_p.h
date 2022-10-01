// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXCLUSIONSPREVIEWREQUEST_P_H
#define QTAWS_GETEXCLUSIONSPREVIEWREQUEST_P_H

#include "inspectorrequest_p.h"
#include "getexclusionspreviewrequest.h"

namespace QtAws {
namespace Inspector {

class GetExclusionsPreviewRequest;

class GetExclusionsPreviewRequestPrivate : public InspectorRequestPrivate {

public:
    GetExclusionsPreviewRequestPrivate(const InspectorRequest::Action action,
                                   GetExclusionsPreviewRequest * const q);
    GetExclusionsPreviewRequestPrivate(const GetExclusionsPreviewRequestPrivate &other,
                                   GetExclusionsPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExclusionsPreviewRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
