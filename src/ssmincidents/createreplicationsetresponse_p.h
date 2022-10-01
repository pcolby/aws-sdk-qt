// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSETRESPONSE_P_H
#define QTAWS_CREATEREPLICATIONSETRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class CreateReplicationSetResponse;

class CreateReplicationSetResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit CreateReplicationSetResponsePrivate(CreateReplicationSetResponse * const q);

    void parseCreateReplicationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationSetResponse)
    Q_DISABLE_COPY(CreateReplicationSetResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
