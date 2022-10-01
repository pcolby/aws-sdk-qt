// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTRESPONSE_P_H
#define QTAWS_STOPCONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StopContactResponse;

class StopContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StopContactResponsePrivate(StopContactResponse * const q);

    void parseStopContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopContactResponse)
    Q_DISABLE_COPY(StopContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
