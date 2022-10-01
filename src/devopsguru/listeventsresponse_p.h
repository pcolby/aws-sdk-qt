// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSRESPONSE_P_H
#define QTAWS_LISTEVENTSRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListEventsResponse;

class ListEventsResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListEventsResponsePrivate(ListEventsResponse * const q);

    void parseListEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventsResponse)
    Q_DISABLE_COPY(ListEventsResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
