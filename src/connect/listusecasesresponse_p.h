// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSECASESRESPONSE_P_H
#define QTAWS_LISTUSECASESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListUseCasesResponse;

class ListUseCasesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListUseCasesResponsePrivate(ListUseCasesResponse * const q);

    void parseListUseCasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUseCasesResponse)
    Q_DISABLE_COPY(ListUseCasesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
