// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHPROFILEREQUEST_H
#define QTAWS_UPDATELAUNCHPROFILEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateLaunchProfileRequestPrivate;

class QTAWSNIMBLE_EXPORT UpdateLaunchProfileRequest : public NimbleRequest {

public:
    UpdateLaunchProfileRequest(const UpdateLaunchProfileRequest &other);
    UpdateLaunchProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
