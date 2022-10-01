// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONRESPONSE_P_H
#define QTAWS_STARTREPLICATIONRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class StartReplicationResponse;

class StartReplicationResponsePrivate : public MgnResponsePrivate {

public:

    explicit StartReplicationResponsePrivate(StartReplicationResponse * const q);

    void parseStartReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReplicationResponse)
    Q_DISABLE_COPY(StartReplicationResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
