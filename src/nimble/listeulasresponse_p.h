// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULASRESPONSE_P_H
#define QTAWS_LISTEULASRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListEulasResponse;

class ListEulasResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListEulasResponsePrivate(ListEulasResponse * const q);

    void parseListEulasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEulasResponse)
    Q_DISABLE_COPY(ListEulasResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
