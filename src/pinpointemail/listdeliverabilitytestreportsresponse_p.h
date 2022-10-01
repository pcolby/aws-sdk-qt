// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_P_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class ListDeliverabilityTestReportsResponse;

class ListDeliverabilityTestReportsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit ListDeliverabilityTestReportsResponsePrivate(ListDeliverabilityTestReportsResponse * const q);

    void parseListDeliverabilityTestReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeliverabilityTestReportsResponse)
    Q_DISABLE_COPY(ListDeliverabilityTestReportsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
