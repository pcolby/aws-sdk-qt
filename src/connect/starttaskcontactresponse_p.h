// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKCONTACTRESPONSE_P_H
#define QTAWS_STARTTASKCONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StartTaskContactResponse;

class StartTaskContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StartTaskContactResponsePrivate(StartTaskContactResponse * const q);

    void parseStartTaskContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTaskContactResponse)
    Q_DISABLE_COPY(StartTaskContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
