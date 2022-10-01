// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYPERSONASRESPONSE_P_H
#define QTAWS_LISTENTITYPERSONASRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListEntityPersonasResponse;

class ListEntityPersonasResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListEntityPersonasResponsePrivate(ListEntityPersonasResponse * const q);

    void parseListEntityPersonasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntityPersonasResponse)
    Q_DISABLE_COPY(ListEntityPersonasResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
