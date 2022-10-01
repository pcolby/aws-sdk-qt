// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSRESPONSE_P_H
#define QTAWS_LISTPRINCIPALSRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class ListPrincipalsResponse;

class ListPrincipalsResponsePrivate : public RamResponsePrivate {

public:

    explicit ListPrincipalsResponsePrivate(ListPrincipalsResponse * const q);

    void parseListPrincipalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPrincipalsResponse)
    Q_DISABLE_COPY(ListPrincipalsResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
