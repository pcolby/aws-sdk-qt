// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITSUPPRESSIONSRESPONSE_P_H
#define QTAWS_LISTAUDITSUPPRESSIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListAuditSuppressionsResponse;

class ListAuditSuppressionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListAuditSuppressionsResponsePrivate(ListAuditSuppressionsResponse * const q);

    void parseListAuditSuppressionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAuditSuppressionsResponse)
    Q_DISABLE_COPY(ListAuditSuppressionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
