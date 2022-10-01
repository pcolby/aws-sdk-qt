// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALCLUSTERRESPONSE_P_H
#define QTAWS_DELETEVIRTUALCLUSTERRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class DeleteVirtualClusterResponse;

class DeleteVirtualClusterResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit DeleteVirtualClusterResponsePrivate(DeleteVirtualClusterResponse * const q);

    void parseDeleteVirtualClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualClusterResponse)
    Q_DISABLE_COPY(DeleteVirtualClusterResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
