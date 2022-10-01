// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMOTEACCESSSESSIONREQUEST_H
#define QTAWS_GETREMOTEACCESSSESSIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetRemoteAccessSessionRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetRemoteAccessSessionRequest : public DeviceFarmRequest {

public:
    GetRemoteAccessSessionRequest(const GetRemoteAccessSessionRequest &other);
    GetRemoteAccessSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
