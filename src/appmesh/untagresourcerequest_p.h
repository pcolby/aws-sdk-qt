// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCEREQUEST_P_H
#define QTAWS_UNTAGRESOURCEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "untagresourcerequest.h"

namespace QtAws {
namespace AppMesh {

class UntagResourceRequest;

class UntagResourceRequestPrivate : public AppMeshRequestPrivate {

public:
    UntagResourceRequestPrivate(const AppMeshRequest::Action action,
                                   UntagResourceRequest * const q);
    UntagResourceRequestPrivate(const UntagResourceRequestPrivate &other,
                                   UntagResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagResourceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
