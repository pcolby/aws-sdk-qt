// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEAMMEMBERSREQUEST_H
#define QTAWS_LISTTEAMMEMBERSREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class ListTeamMembersRequestPrivate;

class QTAWSCODESTAR_EXPORT ListTeamMembersRequest : public CodeStarRequest {

public:
    ListTeamMembersRequest(const ListTeamMembersRequest &other);
    ListTeamMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTeamMembersRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
