// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTRESOURCEDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionsResponse;

class ListResourceDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListResourceDefinitionsResponsePrivate(ListResourceDefinitionsResponse * const q);

    void parseListResourceDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceDefinitionsResponse)
    Q_DISABLE_COPY(ListResourceDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
