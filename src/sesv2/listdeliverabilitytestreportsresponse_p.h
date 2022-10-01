// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_P_H
#define QTAWS_LISTDELIVERABILITYTESTREPORTSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class ListDeliverabilityTestReportsResponse;

class ListDeliverabilityTestReportsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit ListDeliverabilityTestReportsResponsePrivate(ListDeliverabilityTestReportsResponse * const q);

    void parseListDeliverabilityTestReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeliverabilityTestReportsResponse)
    Q_DISABLE_COPY(ListDeliverabilityTestReportsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
