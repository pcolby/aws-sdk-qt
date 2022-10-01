// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETEAMMEMBERREQUEST_H
#define QTAWS_DISASSOCIATETEAMMEMBERREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class DisassociateTeamMemberRequestPrivate;

class QTAWSCODESTAR_EXPORT DisassociateTeamMemberRequest : public CodeStarRequest {

public:
    DisassociateTeamMemberRequest(const DisassociateTeamMemberRequest &other);
    DisassociateTeamMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTeamMemberRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
