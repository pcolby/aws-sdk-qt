// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICEREQUEST_H
#define QTAWS_REGISTERDEVICEREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class RegisterDeviceRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT RegisterDeviceRequest : public CognitoSyncRequest {

public:
    RegisterDeviceRequest(const RegisterDeviceRequest &other);
    RegisterDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDeviceRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
