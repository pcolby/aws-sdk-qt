// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESKILLGROUPRESPONSE_H
#define QTAWS_CREATESKILLGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "createskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateSkillGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateSkillGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    CreateSkillGroupResponse(const CreateSkillGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSkillGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSkillGroupResponse)
    Q_DISABLE_COPY(CreateSkillGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
