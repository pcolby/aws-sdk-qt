// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESRESPONSE_P_H
#define QTAWS_LISTSECURITYPROFILESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListSecurityProfilesResponse;

class ListSecurityProfilesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListSecurityProfilesResponsePrivate(ListSecurityProfilesResponse * const q);

    void parseListSecurityProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecurityProfilesResponse)
    Q_DISABLE_COPY(ListSecurityProfilesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
