// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLGROUPFROMROOMRESPONSE_H
#define QTAWS_DISASSOCIATESKILLGROUPFROMROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "disassociateskillgroupfromroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillGroupFromRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateSkillGroupFromRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DisassociateSkillGroupFromRoomResponse(const DisassociateSkillGroupFromRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSkillGroupFromRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSkillGroupFromRoomResponse)
    Q_DISABLE_COPY(DisassociateSkillGroupFromRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
