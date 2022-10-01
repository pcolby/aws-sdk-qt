// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPROFILESREQUEST_H
#define QTAWS_LISTLAUNCHPROFILESREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListLaunchProfilesRequestPrivate;

class QTAWSNIMBLE_EXPORT ListLaunchProfilesRequest : public NimbleRequest {

public:
    ListLaunchProfilesRequest(const ListLaunchProfilesRequest &other);
    ListLaunchProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLaunchProfilesRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
