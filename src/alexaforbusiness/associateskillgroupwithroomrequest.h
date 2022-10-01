// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLGROUPWITHROOMREQUEST_H
#define QTAWS_ASSOCIATESKILLGROUPWITHROOMREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillGroupWithRoomRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateSkillGroupWithRoomRequest : public AlexaForBusinessRequest {

public:
    AssociateSkillGroupWithRoomRequest(const AssociateSkillGroupWithRoomRequest &other);
    AssociateSkillGroupWithRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSkillGroupWithRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
