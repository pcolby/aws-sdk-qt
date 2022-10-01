// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERSREQUEST_H
#define QTAWS_CREATEMEMBERSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateMembersRequestPrivate;

class QTAWSSECURITYHUB_EXPORT CreateMembersRequest : public SecurityHubRequest {

public:
    CreateMembersRequest(const CreateMembersRequest &other);
    CreateMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
