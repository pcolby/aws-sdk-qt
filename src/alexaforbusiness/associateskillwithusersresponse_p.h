// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHUSERSRESPONSE_P_H
#define QTAWS_ASSOCIATESKILLWITHUSERSRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithUsersResponse;

class AssociateSkillWithUsersResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit AssociateSkillWithUsersResponsePrivate(AssociateSkillWithUsersResponse * const q);

    void parseAssociateSkillWithUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSkillWithUsersResponse)
    Q_DISABLE_COPY(AssociateSkillWithUsersResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
