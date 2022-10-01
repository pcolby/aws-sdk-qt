// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSSTORESKILLSBYCATEGORYRESPONSE_P_H
#define QTAWS_LISTSKILLSSTORESKILLSBYCATEGORYRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsStoreSkillsByCategoryResponse;

class ListSkillsStoreSkillsByCategoryResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListSkillsStoreSkillsByCategoryResponsePrivate(ListSkillsStoreSkillsByCategoryResponse * const q);

    void parseListSkillsStoreSkillsByCategoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSkillsStoreSkillsByCategoryResponse)
    Q_DISABLE_COPY(ListSkillsStoreSkillsByCategoryResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
