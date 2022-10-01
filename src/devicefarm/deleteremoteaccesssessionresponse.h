// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMOTEACCESSSESSIONRESPONSE_H
#define QTAWS_DELETEREMOTEACCESSSESSIONRESPONSE_H

#include "devicefarmresponse.h"
#include "deleteremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRemoteAccessSessionResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeleteRemoteAccessSessionResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    DeleteRemoteAccessSessionResponse(const DeleteRemoteAccessSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRemoteAccessSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRemoteAccessSessionResponse)
    Q_DISABLE_COPY(DeleteRemoteAccessSessionResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
