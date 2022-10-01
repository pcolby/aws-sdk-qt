// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALCLUSTERRESPONSE_P_H
#define QTAWS_CREATEVIRTUALCLUSTERRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class CreateVirtualClusterResponse;

class CreateVirtualClusterResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit CreateVirtualClusterResponsePrivate(CreateVirtualClusterResponse * const q);

    void parseCreateVirtualClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVirtualClusterResponse)
    Q_DISABLE_COPY(CreateVirtualClusterResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
