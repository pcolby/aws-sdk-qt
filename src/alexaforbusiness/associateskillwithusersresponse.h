// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHUSERSRESPONSE_H
#define QTAWS_ASSOCIATESKILLWITHUSERSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "associateskillwithusersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithUsersResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateSkillWithUsersResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    AssociateSkillWithUsersResponse(const AssociateSkillWithUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSkillWithUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSkillWithUsersResponse)
    Q_DISABLE_COPY(AssociateSkillWithUsersResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
