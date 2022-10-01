// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMSKILLGROUPRESPONSE_H
#define QTAWS_DISASSOCIATESKILLFROMSKILLGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "disassociateskillfromskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromSkillGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateSkillFromSkillGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DisassociateSkillFromSkillGroupResponse(const DisassociateSkillFromSkillGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSkillFromSkillGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSkillFromSkillGroupResponse)
    Q_DISABLE_COPY(DisassociateSkillFromSkillGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
