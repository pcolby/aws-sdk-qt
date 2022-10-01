// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "codeartifactrequest_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace CodeArtifact {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public CodeArtifactRequestPrivate {

public:
    UntagResourceRequestPrivate(const CodeArtifactRequest::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
