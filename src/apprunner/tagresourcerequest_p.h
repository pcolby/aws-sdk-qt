// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_P_H
#define QTAWS_TAGRESOURCEREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "tagresourcerequest.h"

namespace QtAws {
namespace AppRunner {

class TagResourceRequest;

class TagResourceRequestPrivate : public AppRunnerRequestPrivate {

public:
    TagResourceRequestPrivate(const AppRunnerRequest::Action action,
                                   TagResourceRequest * const q);
    TagResourceRequestPrivate(const TagResourceRequestPrivate &other,
                                   TagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagResourceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
