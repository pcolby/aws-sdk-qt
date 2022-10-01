// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBJECTRESPONSE_P_H
#define QTAWS_GETSUBJECTRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class GetSubjectResponse;

class GetSubjectResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit GetSubjectResponsePrivate(GetSubjectResponse * const q);

    void parseGetSubjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSubjectResponse)
    Q_DISABLE_COPY(GetSubjectResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
