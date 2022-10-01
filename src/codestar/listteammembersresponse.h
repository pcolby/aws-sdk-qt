// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEAMMEMBERSRESPONSE_H
#define QTAWS_LISTTEAMMEMBERSRESPONSE_H

#include "codestarresponse.h"
#include "listteammembersrequest.h"

namespace QtAws {
namespace CodeStar {

class ListTeamMembersResponsePrivate;

class QTAWSCODESTAR_EXPORT ListTeamMembersResponse : public CodeStarResponse {
    Q_OBJECT

public:
    ListTeamMembersResponse(const ListTeamMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTeamMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTeamMembersResponse)
    Q_DISABLE_COPY(ListTeamMembersResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
