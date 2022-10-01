// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSKILLGROUPSRESPONSE_P_H
#define QTAWS_SEARCHSKILLGROUPSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchSkillGroupsResponse;

class SearchSkillGroupsResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SearchSkillGroupsResponsePrivate(SearchSkillGroupsResponse * const q);

    void parseSearchSkillGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchSkillGroupsResponse)
    Q_DISABLE_COPY(SearchSkillGroupsResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
