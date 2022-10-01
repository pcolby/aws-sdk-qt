// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTESRESPONSE_P_H
#define QTAWS_LISTATTRIBUTESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListAttributesResponse;

class ListAttributesResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListAttributesResponsePrivate(ListAttributesResponse * const q);

    void parseListAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttributesResponse)
    Q_DISABLE_COPY(ListAttributesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
