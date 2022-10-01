// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSRESPONSE_P_H
#define QTAWS_LISTSKILLSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsResponse;

class ListSkillsResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListSkillsResponsePrivate(ListSkillsResponse * const q);

    void parseListSkillsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSkillsResponse)
    Q_DISABLE_COPY(ListSkillsResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
