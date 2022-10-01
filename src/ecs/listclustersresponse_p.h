// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSRESPONSE_P_H
#define QTAWS_LISTCLUSTERSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListClustersResponse;

class ListClustersResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListClustersResponsePrivate(ListClustersResponse * const q);

    void parseListClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClustersResponse)
    Q_DISABLE_COPY(ListClustersResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
