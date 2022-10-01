// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREPAREDSTATEMENTRESPONSE_P_H
#define QTAWS_CREATEPREPAREDSTATEMENTRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class CreatePreparedStatementResponse;

class CreatePreparedStatementResponsePrivate : public AthenaResponsePrivate {

public:

    explicit CreatePreparedStatementResponsePrivate(CreatePreparedStatementResponse * const q);

    void parseCreatePreparedStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePreparedStatementResponse)
    Q_DISABLE_COPY(CreatePreparedStatementResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
