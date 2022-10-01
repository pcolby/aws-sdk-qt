// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTTASKDEFINITIONSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionsResponse;

class ListTaskDefinitionsResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListTaskDefinitionsResponsePrivate(ListTaskDefinitionsResponse * const q);

    void parseListTaskDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTaskDefinitionsResponse)
    Q_DISABLE_COPY(ListTaskDefinitionsResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
