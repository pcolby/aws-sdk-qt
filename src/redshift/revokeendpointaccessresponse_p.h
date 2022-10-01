// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEENDPOINTACCESSRESPONSE_P_H
#define QTAWS_REVOKEENDPOINTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RevokeEndpointAccessResponse;

class RevokeEndpointAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RevokeEndpointAccessResponsePrivate(RevokeEndpointAccessResponse * const q);

    void parseRevokeEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeEndpointAccessResponse)
    Q_DISABLE_COPY(RevokeEndpointAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
