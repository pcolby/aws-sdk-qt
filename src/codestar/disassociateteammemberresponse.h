// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETEAMMEMBERRESPONSE_H
#define QTAWS_DISASSOCIATETEAMMEMBERRESPONSE_H

#include "codestarresponse.h"
#include "disassociateteammemberrequest.h"

namespace QtAws {
namespace CodeStar {

class DisassociateTeamMemberResponsePrivate;

class QTAWSCODESTAR_EXPORT DisassociateTeamMemberResponse : public CodeStarResponse {
    Q_OBJECT

public:
    DisassociateTeamMemberResponse(const DisassociateTeamMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTeamMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTeamMemberResponse)
    Q_DISABLE_COPY(DisassociateTeamMemberResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
