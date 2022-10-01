// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHSKILLGROUPREQUEST_H
#define QTAWS_ASSOCIATESKILLWITHSKILLGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithSkillGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateSkillWithSkillGroupRequest : public AlexaForBusinessRequest {

public:
    AssociateSkillWithSkillGroupRequest(const AssociateSkillWithSkillGroupRequest &other);
    AssociateSkillWithSkillGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSkillWithSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
