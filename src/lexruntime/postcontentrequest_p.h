// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCONTENTREQUEST_P_H
#define QTAWS_POSTCONTENTREQUEST_P_H

#include "lexruntimerequest_p.h"
#include "postcontentrequest.h"

namespace QtAws {
namespace LexRuntime {

class PostContentRequest;

class PostContentRequestPrivate : public LexRuntimeRequestPrivate {

public:
    PostContentRequestPrivate(const LexRuntimeRequest::Action action,
                                   PostContentRequest * const q);
    PostContentRequestPrivate(const PostContentRequestPrivate &other,
                                   PostContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostContentRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
