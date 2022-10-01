// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMEVENTSRESPONSE_P_H
#define QTAWS_LISTOPSITEMEVENTSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemEventsResponse;

class ListOpsItemEventsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListOpsItemEventsResponsePrivate(ListOpsItemEventsResponse * const q);

    void parseListOpsItemEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOpsItemEventsResponse)
    Q_DISABLE_COPY(ListOpsItemEventsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
