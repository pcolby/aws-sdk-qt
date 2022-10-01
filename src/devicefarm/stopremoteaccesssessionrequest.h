// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREMOTEACCESSSESSIONREQUEST_H
#define QTAWS_STOPREMOTEACCESSSESSIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopRemoteAccessSessionRequestPrivate;

class QTAWSDEVICEFARM_EXPORT StopRemoteAccessSessionRequest : public DeviceFarmRequest {

public:
    StopRemoteAccessSessionRequest(const StopRemoteAccessSessionRequest &other);
    StopRemoteAccessSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
