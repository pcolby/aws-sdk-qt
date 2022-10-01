// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPERSONASTOENTITIESRESPONSE_P_H
#define QTAWS_ASSOCIATEPERSONASTOENTITIESRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class AssociatePersonasToEntitiesResponse;

class AssociatePersonasToEntitiesResponsePrivate : public KendraResponsePrivate {

public:

    explicit AssociatePersonasToEntitiesResponsePrivate(AssociatePersonasToEntitiesResponse * const q);

    void parseAssociatePersonasToEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePersonasToEntitiesResponse)
    Q_DISABLE_COPY(AssociatePersonasToEntitiesResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
