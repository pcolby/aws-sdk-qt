// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLGROUPWITHROOMRESPONSE_H
#define QTAWS_ASSOCIATESKILLGROUPWITHROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "associateskillgroupwithroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillGroupWithRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateSkillGroupWithRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    AssociateSkillGroupWithRoomResponse(const AssociateSkillGroupWithRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSkillGroupWithRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSkillGroupWithRoomResponse)
    Q_DISABLE_COPY(AssociateSkillGroupWithRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
