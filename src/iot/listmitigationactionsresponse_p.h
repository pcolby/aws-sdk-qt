// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMITIGATIONACTIONSRESPONSE_P_H
#define QTAWS_LISTMITIGATIONACTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListMitigationActionsResponse;

class ListMitigationActionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListMitigationActionsResponsePrivate(ListMitigationActionsResponse * const q);

    void parseListMitigationActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMitigationActionsResponse)
    Q_DISABLE_COPY(ListMitigationActionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
