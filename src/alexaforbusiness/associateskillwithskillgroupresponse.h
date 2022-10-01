// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESKILLWITHSKILLGROUPRESPONSE_H
#define QTAWS_ASSOCIATESKILLWITHSKILLGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "associateskillwithskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateSkillWithSkillGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateSkillWithSkillGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    AssociateSkillWithSkillGroupResponse(const AssociateSkillWithSkillGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSkillWithSkillGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSkillWithSkillGroupResponse)
    Q_DISABLE_COPY(AssociateSkillWithSkillGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
