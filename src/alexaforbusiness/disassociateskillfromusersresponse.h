// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESKILLFROMUSERSRESPONSE_H
#define QTAWS_DISASSOCIATESKILLFROMUSERSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "disassociateskillfromusersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateSkillFromUsersResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateSkillFromUsersResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DisassociateSkillFromUsersResponse(const DisassociateSkillFromUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSkillFromUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSkillFromUsersResponse)
    Q_DISABLE_COPY(DisassociateSkillFromUsersResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
