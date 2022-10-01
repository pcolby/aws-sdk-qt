// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREPAREDSTATEMENTSRESPONSE_P_H
#define QTAWS_LISTPREPAREDSTATEMENTSRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class ListPreparedStatementsResponse;

class ListPreparedStatementsResponsePrivate : public AthenaResponsePrivate {

public:

    explicit ListPreparedStatementsResponsePrivate(ListPreparedStatementsResponse * const q);

    void parseListPreparedStatementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPreparedStatementsResponse)
    Q_DISABLE_COPY(ListPreparedStatementsResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
