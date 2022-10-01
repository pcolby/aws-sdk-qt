// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHPROFILEREQUEST_H
#define QTAWS_CREATELAUNCHPROFILEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class CreateLaunchProfileRequestPrivate;

class QTAWSNIMBLE_EXPORT CreateLaunchProfileRequest : public NimbleRequest {

public:
    CreateLaunchProfileRequest(const CreateLaunchProfileRequest &other);
    CreateLaunchProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
