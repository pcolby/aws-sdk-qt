// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERENDPOINTRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterEndpointResponse;

class CreateDBClusterEndpointResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CreateDBClusterEndpointResponsePrivate(CreateDBClusterEndpointResponse * const q);

    void parseCreateDBClusterEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterEndpointResponse)
    Q_DISABLE_COPY(CreateDBClusterEndpointResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
