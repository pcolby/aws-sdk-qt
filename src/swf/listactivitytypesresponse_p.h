// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITYTYPESRESPONSE_P_H
#define QTAWS_LISTACTIVITYTYPESRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class ListActivityTypesResponse;

class ListActivityTypesResponsePrivate : public SwfResponsePrivate {

public:

    explicit ListActivityTypesResponsePrivate(ListActivityTypesResponse * const q);

    void parseListActivityTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActivityTypesResponse)
    Q_DISABLE_COPY(ListActivityTypesResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
