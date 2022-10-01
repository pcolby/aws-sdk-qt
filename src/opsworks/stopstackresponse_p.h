// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKRESPONSE_P_H
#define QTAWS_STOPSTACKRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class StopStackResponse;

class StopStackResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit StopStackResponsePrivate(StopStackResponse * const q);

    void parseStopStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStackResponse)
    Q_DISABLE_COPY(StopStackResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
