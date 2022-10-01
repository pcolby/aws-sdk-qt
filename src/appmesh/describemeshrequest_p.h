// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMESHREQUEST_P_H
#define QTAWS_DESCRIBEMESHREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describemeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeMeshRequest;

class DescribeMeshRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeMeshRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeMeshRequest * const q);
    DescribeMeshRequestPrivate(const DescribeMeshRequestPrivate &other,
                                   DescribeMeshRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
