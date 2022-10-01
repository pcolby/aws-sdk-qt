// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTCOREDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListCoreDefinitionsResponse;

class ListCoreDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListCoreDefinitionsResponsePrivate(ListCoreDefinitionsResponse * const q);

    void parseListCoreDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCoreDefinitionsResponse)
    Q_DISABLE_COPY(ListCoreDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
