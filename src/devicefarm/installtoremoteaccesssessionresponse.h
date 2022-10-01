// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSTALLTOREMOTEACCESSSESSIONRESPONSE_H
#define QTAWS_INSTALLTOREMOTEACCESSSESSIONRESPONSE_H

#include "devicefarmresponse.h"
#include "installtoremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class InstallToRemoteAccessSessionResponsePrivate;

class QTAWSDEVICEFARM_EXPORT InstallToRemoteAccessSessionResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    InstallToRemoteAccessSessionResponse(const InstallToRemoteAccessSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InstallToRemoteAccessSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InstallToRemoteAccessSessionResponse)
    Q_DISABLE_COPY(InstallToRemoteAccessSessionResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
