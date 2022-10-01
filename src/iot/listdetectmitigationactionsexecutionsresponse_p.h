// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSEXECUTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsExecutionsResponse;

class ListDetectMitigationActionsExecutionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListDetectMitigationActionsExecutionsResponsePrivate(ListDetectMitigationActionsExecutionsResponse * const q);

    void parseListDetectMitigationActionsExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDetectMitigationActionsExecutionsResponse)
    Q_DISABLE_COPY(ListDetectMitigationActionsExecutionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
