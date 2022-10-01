// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUERYRESPONSE_P_H
#define QTAWS_CANCELQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class CancelQueryResponse;

class CancelQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit CancelQueryResponsePrivate(CancelQueryResponse * const q);

    void parseCancelQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelQueryResponse)
    Q_DISABLE_COPY(CancelQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
