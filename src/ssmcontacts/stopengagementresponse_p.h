// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENGAGEMENTRESPONSE_P_H
#define QTAWS_STOPENGAGEMENTRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class StopEngagementResponse;

class StopEngagementResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit StopEngagementResponsePrivate(StopEngagementResponse * const q);

    void parseStopEngagementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopEngagementResponse)
    Q_DISABLE_COPY(StopEngagementResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
