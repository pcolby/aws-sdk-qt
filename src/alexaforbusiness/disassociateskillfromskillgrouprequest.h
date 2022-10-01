// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMSKILLGROUPREQUEST_H
#define QTAWS_DISASSOCIATESKILLFROMSKILLGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromSkillGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateSkillFromSkillGroupRequest : public AlexaForBusinessRequest {

public:
    DisassociateSkillFromSkillGroupRequest(const DisassociateSkillFromSkillGroupRequest &other);
    DisassociateSkillFromSkillGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSkillFromSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
