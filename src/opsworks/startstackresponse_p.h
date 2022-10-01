// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTACKRESPONSE_P_H
#define QTAWS_STARTSTACKRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class StartStackResponse;

class StartStackResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit StartStackResponsePrivate(StartStackResponse * const q);

    void parseStartStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStackResponse)
    Q_DISABLE_COPY(StartStackResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
