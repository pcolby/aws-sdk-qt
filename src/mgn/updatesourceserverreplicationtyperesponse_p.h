// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCESERVERREPLICATIONTYPERESPONSE_P_H
#define QTAWS_UPDATESOURCESERVERREPLICATIONTYPERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class UpdateSourceServerReplicationTypeResponse;

class UpdateSourceServerReplicationTypeResponsePrivate : public MgnResponsePrivate {

public:

    explicit UpdateSourceServerReplicationTypeResponsePrivate(UpdateSourceServerReplicationTypeResponse * const q);

    void parseUpdateSourceServerReplicationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSourceServerReplicationTypeResponse)
    Q_DISABLE_COPY(UpdateSourceServerReplicationTypeResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
