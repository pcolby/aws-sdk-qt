// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESKILLGROUPRESPONSE_H
#define QTAWS_DELETESKILLGROUPRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deleteskillgrouprequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteSkillGroupResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteSkillGroupResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteSkillGroupResponse(const DeleteSkillGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSkillGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSkillGroupResponse)
    Q_DISABLE_COPY(DeleteSkillGroupResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
