// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREPAREDSTATEMENTRESPONSE_P_H
#define QTAWS_GETPREPAREDSTATEMENTRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetPreparedStatementResponse;

class GetPreparedStatementResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetPreparedStatementResponsePrivate(GetPreparedStatementResponse * const q);

    void parseGetPreparedStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPreparedStatementResponse)
    Q_DISABLE_COPY(GetPreparedStatementResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
