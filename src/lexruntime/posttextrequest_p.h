// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTEXTREQUEST_P_H
#define QTAWS_POSTTEXTREQUEST_P_H

#include "lexruntimerequest_p.h"
#include "posttextrequest.h"

namespace QtAws {
namespace LexRuntime {

class PostTextRequest;

class PostTextRequestPrivate : public LexRuntimeRequestPrivate {

public:
    PostTextRequestPrivate(const LexRuntimeRequest::Action action,
                                   PostTextRequest * const q);
    PostTextRequestPrivate(const PostTextRequestPrivate &other,
                                   PostTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostTextRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
