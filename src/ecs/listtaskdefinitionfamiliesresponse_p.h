// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONFAMILIESRESPONSE_P_H
#define QTAWS_LISTTASKDEFINITIONFAMILIESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionFamiliesResponse;

class ListTaskDefinitionFamiliesResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListTaskDefinitionFamiliesResponsePrivate(ListTaskDefinitionFamiliesResponse * const q);

    void parseListTaskDefinitionFamiliesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTaskDefinitionFamiliesResponse)
    Q_DISABLE_COPY(ListTaskDefinitionFamiliesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
