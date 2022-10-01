// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREPAREDSTATEMENTRESPONSE_P_H
#define QTAWS_DELETEPREPAREDSTATEMENTRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class DeletePreparedStatementResponse;

class DeletePreparedStatementResponsePrivate : public AthenaResponsePrivate {

public:

    explicit DeletePreparedStatementResponsePrivate(DeletePreparedStatementResponse * const q);

    void parseDeletePreparedStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePreparedStatementResponse)
    Q_DISABLE_COPY(DeletePreparedStatementResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
