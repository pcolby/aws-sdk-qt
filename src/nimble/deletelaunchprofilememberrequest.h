// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILEMEMBERREQUEST_H
#define QTAWS_DELETELAUNCHPROFILEMEMBERREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileMemberRequestPrivate;

class QTAWSNIMBLE_EXPORT DeleteLaunchProfileMemberRequest : public NimbleRequest {

public:
    DeleteLaunchProfileMemberRequest(const DeleteLaunchProfileMemberRequest &other);
    DeleteLaunchProfileMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchProfileMemberRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
