// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETEAMMEMBERRESPONSE_H
#define QTAWS_ASSOCIATETEAMMEMBERRESPONSE_H

#include "codestarresponse.h"
#include "associateteammemberrequest.h"

namespace QtAws {
namespace CodeStar {

class AssociateTeamMemberResponsePrivate;

class QTAWSCODESTAR_EXPORT AssociateTeamMemberResponse : public CodeStarResponse {
    Q_OBJECT

public:
    AssociateTeamMemberResponse(const AssociateTeamMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTeamMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTeamMemberResponse)
    Q_DISABLE_COPY(AssociateTeamMemberResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
