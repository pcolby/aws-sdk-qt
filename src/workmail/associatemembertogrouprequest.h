// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERTOGROUPREQUEST_H
#define QTAWS_ASSOCIATEMEMBERTOGROUPREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class AssociateMemberToGroupRequestPrivate;

class QTAWSWORKMAIL_EXPORT AssociateMemberToGroupRequest : public WorkMailRequest {

public:
    AssociateMemberToGroupRequest(const AssociateMemberToGroupRequest &other);
    AssociateMemberToGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMemberToGroupRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
