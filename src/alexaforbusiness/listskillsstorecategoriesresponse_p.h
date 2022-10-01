// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSSTORECATEGORIESRESPONSE_P_H
#define QTAWS_LISTSKILLSSTORECATEGORIESRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsStoreCategoriesResponse;

class ListSkillsStoreCategoriesResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListSkillsStoreCategoriesResponsePrivate(ListSkillsStoreCategoriesResponse * const q);

    void parseListSkillsStoreCategoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSkillsStoreCategoriesResponse)
    Q_DISABLE_COPY(ListSkillsStoreCategoriesResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
