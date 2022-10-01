// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHPROFILEREQUEST_H
#define QTAWS_GETLAUNCHPROFILEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetLaunchProfileRequestPrivate;

class QTAWSNIMBLE_EXPORT GetLaunchProfileRequest : public NimbleRequest {

public:
    GetLaunchProfileRequest(const GetLaunchProfileRequest &other);
    GetLaunchProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
