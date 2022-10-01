// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCEENTITIESRESPONSE_P_H
#define QTAWS_LISTEXPERIENCEENTITIESRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListExperienceEntitiesResponse;

class ListExperienceEntitiesResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListExperienceEntitiesResponsePrivate(ListExperienceEntitiesResponse * const q);

    void parseListExperienceEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExperienceEntitiesResponse)
    Q_DISABLE_COPY(ListExperienceEntitiesResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
