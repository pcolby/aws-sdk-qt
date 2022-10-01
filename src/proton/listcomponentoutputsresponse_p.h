// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTOUTPUTSRESPONSE_P_H
#define QTAWS_LISTCOMPONENTOUTPUTSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListComponentOutputsResponse;

class ListComponentOutputsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListComponentOutputsResponsePrivate(ListComponentOutputsResponse * const q);

    void parseListComponentOutputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentOutputsResponse)
    Q_DISABLE_COPY(ListComponentOutputsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
