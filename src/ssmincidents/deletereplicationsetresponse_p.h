// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSETRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONSETRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteReplicationSetResponse;

class DeleteReplicationSetResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit DeleteReplicationSetResponsePrivate(DeleteReplicationSetResponse * const q);

    void parseDeleteReplicationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationSetResponse)
    Q_DISABLE_COPY(DeleteReplicationSetResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
