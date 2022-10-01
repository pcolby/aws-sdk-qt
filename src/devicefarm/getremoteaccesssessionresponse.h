// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREMOTEACCESSSESSIONRESPONSE_H
#define QTAWS_GETREMOTEACCESSSESSIONRESPONSE_H

#include "devicefarmresponse.h"
#include "getremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetRemoteAccessSessionResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetRemoteAccessSessionResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetRemoteAccessSessionResponse(const GetRemoteAccessSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRemoteAccessSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRemoteAccessSessionResponse)
    Q_DISABLE_COPY(GetRemoteAccessSessionResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
