// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEDGERSRESPONSE_P_H
#define QTAWS_LISTLEDGERSRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class ListLedgersResponse;

class ListLedgersResponsePrivate : public QldbResponsePrivate {

public:

    explicit ListLedgersResponsePrivate(ListLedgersResponse * const q);

    void parseListLedgersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLedgersResponse)
    Q_DISABLE_COPY(ListLedgersResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
