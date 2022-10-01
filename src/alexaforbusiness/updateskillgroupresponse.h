// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESKILLGROUPRESPONSE_H
#define QTAWS_UPDATESKILLGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updateskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateSkillGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateSkillGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateSkillGroupResponse(const UpdateSkillGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSkillGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSkillGroupResponse)
    Q_DISABLE_COPY(UpdateSkillGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
