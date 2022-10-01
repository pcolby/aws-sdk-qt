// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALCLUSTERSRESPONSE_P_H
#define QTAWS_LISTVIRTUALCLUSTERSRESPONSE_P_H

#include "emrcontainersresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class ListVirtualClustersResponse;

class ListVirtualClustersResponsePrivate : public EmrcontainersResponsePrivate {

public:

    explicit ListVirtualClustersResponsePrivate(ListVirtualClustersResponse * const q);

    void parseListVirtualClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualClustersResponse)
    Q_DISABLE_COPY(ListVirtualClustersResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
