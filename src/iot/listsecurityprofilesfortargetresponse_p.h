// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESFORTARGETRESPONSE_P_H
#define QTAWS_LISTSECURITYPROFILESFORTARGETRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListSecurityProfilesForTargetResponse;

class ListSecurityProfilesForTargetResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListSecurityProfilesForTargetResponsePrivate(ListSecurityProfilesForTargetResponse * const q);

    void parseListSecurityProfilesForTargetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecurityProfilesForTargetResponse)
    Q_DISABLE_COPY(ListSecurityProfilesForTargetResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
