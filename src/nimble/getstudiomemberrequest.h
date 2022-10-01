// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOMEMBERREQUEST_H
#define QTAWS_GETSTUDIOMEMBERREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioMemberRequestPrivate;

class QTAWSNIMBLE_EXPORT GetStudioMemberRequest : public NimbleRequest {

public:
    GetStudioMemberRequest(const GetStudioMemberRequest &other);
    GetStudioMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
