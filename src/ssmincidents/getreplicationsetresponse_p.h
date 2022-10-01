// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONSETRESPONSE_P_H
#define QTAWS_GETREPLICATIONSETRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class GetReplicationSetResponse;

class GetReplicationSetResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit GetReplicationSetResponsePrivate(GetReplicationSetResponse * const q);

    void parseGetReplicationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReplicationSetResponse)
    Q_DISABLE_COPY(GetReplicationSetResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
