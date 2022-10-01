// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGETOTALSRESPONSE_P_H
#define QTAWS_GETUSAGETOTALSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetUsageTotalsResponse;

class GetUsageTotalsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetUsageTotalsResponsePrivate(GetUsageTotalsResponse * const q);

    void parseGetUsageTotalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsageTotalsResponse)
    Q_DISABLE_COPY(GetUsageTotalsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
