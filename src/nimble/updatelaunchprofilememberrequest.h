// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILEMEMBERREQUEST_H
#define QTAWS_UPDATELAUNCHPROFILEMEMBERREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileMemberRequestPrivate;

class QTAWSNIMBLE_EXPORT UpdateLaunchProfileMemberRequest : public NimbleRequest {

public:
    UpdateLaunchProfileMemberRequest(const UpdateLaunchProfileMemberRequest &other);
    UpdateLaunchProfileMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchProfileMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
