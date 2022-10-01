// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREVIEWAGENTSREQUEST_P_H
#define QTAWS_PREVIEWAGENTSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "previewagentsrequest.h"

namespace QtAws {
namespace Inspector {

class PreviewAgentsRequest;

class PreviewAgentsRequestPrivate : public InspectorRequestPrivate {

public:
    PreviewAgentsRequestPrivate(const InspectorRequest::Action action,
                                   PreviewAgentsRequest * const q);
    PreviewAgentsRequestPrivate(const PreviewAgentsRequestPrivate &other,
                                   PreviewAgentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PreviewAgentsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
