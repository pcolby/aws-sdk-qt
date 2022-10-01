// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSREQUEST_H
#define QTAWS_GETMEMBERSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetMembersRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetMembersRequest : public SecurityHubRequest {

public:
    GetMembersRequest(const GetMembersRequest &other);
    GetMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
