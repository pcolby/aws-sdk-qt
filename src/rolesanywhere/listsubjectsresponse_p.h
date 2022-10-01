// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBJECTSRESPONSE_P_H
#define QTAWS_LISTSUBJECTSRESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class ListSubjectsResponse;

class ListSubjectsResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit ListSubjectsResponsePrivate(ListSubjectsResponse * const q);

    void parseListSubjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubjectsResponse)
    Q_DISABLE_COPY(ListSubjectsResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
