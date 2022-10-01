// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSRESPONSE_P_H
#define QTAWS_LISTCOMPONENTSRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListComponentsResponse;

class ListComponentsResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListComponentsResponsePrivate(ListComponentsResponse * const q);

    void parseListComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentsResponse)
    Q_DISABLE_COPY(ListComponentsResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
