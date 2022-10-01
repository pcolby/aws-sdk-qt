// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEDETAILSREQUEST_H
#define QTAWS_GETLAUNCHPROFILEDETAILSREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileDetailsRequestPrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileDetailsRequest : public NimbleRequest {

public:
    GetLaunchProfileDetailsRequest(const GetLaunchProfileDetailsRequest &other);
    GetLaunchProfileDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileDetailsRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
