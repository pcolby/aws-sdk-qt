// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSTALLTOREMOTEACCESSSESSIONREQUEST_H
#define QTAWS_INSTALLTOREMOTEACCESSSESSIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class InstallToRemoteAccessSessionRequestPrivate;

class QTAWSDEVICEFARM_EXPORT InstallToRemoteAccessSessionRequest : public DeviceFarmRequest {

public:
    InstallToRemoteAccessSessionRequest(const InstallToRemoteAccessSessionRequest &other);
    InstallToRemoteAccessSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InstallToRemoteAccessSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
