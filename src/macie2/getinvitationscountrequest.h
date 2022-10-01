// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTREQUEST_H
#define QTAWS_GETINVITATIONSCOUNTREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetInvitationsCountRequestPrivate;

class QTAWSMACIE2_EXPORT GetInvitationsCountRequest : public Macie2Request {

public:
    GetInvitationsCountRequest(const GetInvitationsCountRequest &other);
    GetInvitationsCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvitationsCountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
