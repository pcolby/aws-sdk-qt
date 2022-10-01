// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGETOTALSRESPONSE_P_H
#define QTAWS_LISTUSAGETOTALSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListUsageTotalsResponse;

class ListUsageTotalsResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListUsageTotalsResponsePrivate(ListUsageTotalsResponse * const q);

    void parseListUsageTotalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsageTotalsResponse)
    Q_DISABLE_COPY(ListUsageTotalsResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
