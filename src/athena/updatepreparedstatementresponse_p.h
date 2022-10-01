// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPREPAREDSTATEMENTRESPONSE_P_H
#define QTAWS_UPDATEPREPAREDSTATEMENTRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class UpdatePreparedStatementResponse;

class UpdatePreparedStatementResponsePrivate : public AthenaResponsePrivate {

public:

    explicit UpdatePreparedStatementResponsePrivate(UpdatePreparedStatementResponse * const q);

    void parseUpdatePreparedStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePreparedStatementResponse)
    Q_DISABLE_COPY(UpdatePreparedStatementResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
