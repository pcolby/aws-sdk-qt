// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEMEMBERREQUEST_H
#define QTAWS_GETLAUNCHPROFILEMEMBERREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileMemberRequestPrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileMemberRequest : public NimbleRequest {

public:
    GetLaunchProfileMemberRequest(const GetLaunchProfileMemberRequest &other);
    GetLaunchProfileMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
