// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENGAGEMENTRESPONSE_P_H
#define QTAWS_STARTENGAGEMENTRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class StartEngagementResponse;

class StartEngagementResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit StartEngagementResponsePrivate(StartEngagementResponse * const q);

    void parseStartEngagementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartEngagementResponse)
    Q_DISABLE_COPY(StartEngagementResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
