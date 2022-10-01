// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONSETRESPONSE_P_H
#define QTAWS_UPDATEREPLICATIONSETRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateReplicationSetResponse;

class UpdateReplicationSetResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit UpdateReplicationSetResponsePrivate(UpdateReplicationSetResponse * const q);

    void parseUpdateReplicationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationSetResponse)
    Q_DISABLE_COPY(UpdateReplicationSetResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
