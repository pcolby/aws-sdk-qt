// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULAACCEPTANCESRESPONSE_P_H
#define QTAWS_LISTEULAACCEPTANCESRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListEulaAcceptancesResponse;

class ListEulaAcceptancesResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListEulaAcceptancesResponsePrivate(ListEulaAcceptancesResponse * const q);

    void parseListEulaAcceptancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEulaAcceptancesResponse)
    Q_DISABLE_COPY(ListEulaAcceptancesResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
