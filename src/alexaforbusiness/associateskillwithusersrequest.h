// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHUSERSREQUEST_H
#define QTAWS_ASSOCIATESKILLWITHUSERSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithUsersRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateSkillWithUsersRequest : public AlexaForBusinessRequest {

public:
    AssociateSkillWithUsersRequest(const AssociateSkillWithUsersRequest &other);
    AssociateSkillWithUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSkillWithUsersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
