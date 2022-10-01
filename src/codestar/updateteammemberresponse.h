// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEAMMEMBERRESPONSE_H
#define QTAWS_UPDATETEAMMEMBERRESPONSE_H

#include "codestarresponse.h"
#include "updateteammemberrequest.h"

namespace QtAws {
namespace CodeStar {

class UpdateTeamMemberResponsePrivate;

class QTAWSCODESTAR_EXPORT UpdateTeamMemberResponse : public CodeStarResponse {
    Q_OBJECT

public:
    UpdateTeamMemberResponse(const UpdateTeamMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTeamMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTeamMemberResponse)
    Q_DISABLE_COPY(UpdateTeamMemberResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
