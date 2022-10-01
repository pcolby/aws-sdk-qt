// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDRESPONSE_P_H
#define QTAWS_GETRELATIONALDATABASEMASTERUSERPASSWORDRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseMasterUserPasswordResponse;

class GetRelationalDatabaseMasterUserPasswordResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetRelationalDatabaseMasterUserPasswordResponsePrivate(GetRelationalDatabaseMasterUserPasswordResponse * const q);

    void parseGetRelationalDatabaseMasterUserPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRelationalDatabaseMasterUserPasswordResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseMasterUserPasswordResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
