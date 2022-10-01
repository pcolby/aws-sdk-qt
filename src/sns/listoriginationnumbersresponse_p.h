// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINATIONNUMBERSRESPONSE_P_H
#define QTAWS_LISTORIGINATIONNUMBERSRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListOriginationNumbersResponse;

class ListOriginationNumbersResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListOriginationNumbersResponsePrivate(ListOriginationNumbersResponse * const q);

    void parseListOriginationNumbersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOriginationNumbersResponse)
    Q_DISABLE_COPY(ListOriginationNumbersResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
