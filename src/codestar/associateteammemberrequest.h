// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETEAMMEMBERREQUEST_H
#define QTAWS_ASSOCIATETEAMMEMBERREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class AssociateTeamMemberRequestPrivate;

class QTAWSCODESTAR_EXPORT AssociateTeamMemberRequest : public CodeStarRequest {

public:
    AssociateTeamMemberRequest(const AssociateTeamMemberRequest &other);
    AssociateTeamMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTeamMemberRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
