// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEAMMEMBERREQUEST_H
#define QTAWS_UPDATETEAMMEMBERREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class UpdateTeamMemberRequestPrivate;

class QTAWSCODESTAR_EXPORT UpdateTeamMemberRequest : public CodeStarRequest {

public:
    UpdateTeamMemberRequest(const UpdateTeamMemberRequest &other);
    UpdateTeamMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTeamMemberRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
