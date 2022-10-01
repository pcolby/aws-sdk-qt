// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPVERSIONSRESPONSE_P_H
#define QTAWS_LISTGROUPVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListGroupVersionsResponse;

class ListGroupVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListGroupVersionsResponsePrivate(ListGroupVersionsResponse * const q);

    void parseListGroupVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupVersionsResponse)
    Q_DISABLE_COPY(ListGroupVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
