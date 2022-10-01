// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXCLUSIONSPREVIEWREQUEST_P_H
#define QTAWS_CREATEEXCLUSIONSPREVIEWREQUEST_P_H

#include "inspectorrequest_p.h"
#include "createexclusionspreviewrequest.h"

namespace QtAws {
namespace Inspector {

class CreateExclusionsPreviewRequest;

class CreateExclusionsPreviewRequestPrivate : public InspectorRequestPrivate {

public:
    CreateExclusionsPreviewRequestPrivate(const InspectorRequest::Action action,
                                   CreateExclusionsPreviewRequest * const q);
    CreateExclusionsPreviewRequestPrivate(const CreateExclusionsPreviewRequestPrivate &other,
                                   CreateExclusionsPreviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExclusionsPreviewRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
