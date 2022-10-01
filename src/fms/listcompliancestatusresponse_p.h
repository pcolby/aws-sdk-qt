// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCESTATUSRESPONSE_P_H
#define QTAWS_LISTCOMPLIANCESTATUSRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class ListComplianceStatusResponse;

class ListComplianceStatusResponsePrivate : public FmsResponsePrivate {

public:

    explicit ListComplianceStatusResponsePrivate(ListComplianceStatusResponse * const q);

    void parseListComplianceStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComplianceStatusResponse)
    Q_DISABLE_COPY(ListComplianceStatusResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
