// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILEMEMBERSREQUEST_H
#define QTAWS_LISTLAUNCHPROFILEMEMBERSREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfileMembersRequestPrivate;

class QTAWSNIMBLE_EXPORT ListLaunchProfileMembersRequest : public NimbleRequest {

public:
    ListLaunchProfileMembersRequest(const ListLaunchProfileMembersRequest &other);
    ListLaunchProfileMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchProfileMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
