// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXCLUSIONSRESPONSE_P_H
#define QTAWS_LISTEXCLUSIONSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListExclusionsResponse;

class ListExclusionsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListExclusionsResponsePrivate(ListExclusionsResponse * const q);

    void parseListExclusionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExclusionsResponse)
    Q_DISABLE_COPY(ListExclusionsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
