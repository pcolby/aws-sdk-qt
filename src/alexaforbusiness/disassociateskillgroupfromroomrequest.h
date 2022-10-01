// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLGROUPFROMROOMREQUEST_H
#define QTAWS_DISASSOCIATESKILLGROUPFROMROOMREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillGroupFromRoomRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateSkillGroupFromRoomRequest : public AlexaForBusinessRequest {

public:
    DisassociateSkillGroupFromRoomRequest(const DisassociateSkillGroupFromRoomRequest &other);
    DisassociateSkillGroupFromRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSkillGroupFromRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
