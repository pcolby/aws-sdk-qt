// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEINITIALIZATIONREQUEST_H
#define QTAWS_GETLAUNCHPROFILEINITIALIZATIONREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileInitializationRequestPrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileInitializationRequest : public NimbleRequest {

public:
    GetLaunchProfileInitializationRequest(const GetLaunchProfileInitializationRequest &other);
    GetLaunchProfileInitializationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileInitializationRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
