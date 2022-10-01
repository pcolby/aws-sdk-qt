// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLESANYWHERERESPONSE_P_H
#define QTAWS_ROLESANYWHERERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class RolesAnywhereResponse;

class RolesAnywhereResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RolesAnywhereResponsePrivate(RolesAnywhereResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RolesAnywhereResponse)
    Q_DISABLE_COPY(RolesAnywhereResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
