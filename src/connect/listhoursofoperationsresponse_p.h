// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOURSOFOPERATIONSRESPONSE_P_H
#define QTAWS_LISTHOURSOFOPERATIONSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListHoursOfOperationsResponse;

class ListHoursOfOperationsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListHoursOfOperationsResponsePrivate(ListHoursOfOperationsResponse * const q);

    void parseListHoursOfOperationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHoursOfOperationsResponse)
    Q_DISABLE_COPY(ListHoursOfOperationsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
