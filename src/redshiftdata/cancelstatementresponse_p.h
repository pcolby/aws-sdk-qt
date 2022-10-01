// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTATEMENTRESPONSE_P_H
#define QTAWS_CANCELSTATEMENTRESPONSE_P_H

#include "redshiftdataresponse_p.h"

namespace QtAws {
namespace RedshiftData {

class CancelStatementResponse;

class CancelStatementResponsePrivate : public RedshiftDataResponsePrivate {

public:

    explicit CancelStatementResponsePrivate(CancelStatementResponse * const q);

    void parseCancelStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelStatementResponse)
    Q_DISABLE_COPY(CancelStatementResponsePrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
