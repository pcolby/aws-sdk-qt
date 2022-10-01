// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSKILLGROUPRESPONSE_H
#define QTAWS_GETSKILLGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetSkillGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetSkillGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetSkillGroupResponse(const GetSkillGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSkillGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSkillGroupResponse)
    Q_DISABLE_COPY(GetSkillGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
