// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTVERSIONSRESPONSE_P_H
#define QTAWS_LISTCOMPONENTVERSIONSRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListComponentVersionsResponse;

class ListComponentVersionsResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListComponentVersionsResponsePrivate(ListComponentVersionsResponse * const q);

    void parseListComponentVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentVersionsResponse)
    Q_DISABLE_COPY(ListComponentVersionsResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
