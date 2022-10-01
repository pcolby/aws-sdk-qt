// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKPROFILERESPONSE_H
#define QTAWS_DELETENETWORKPROFILERESPONSE_H

#include "devicefarmresponse.h"
#include "deletenetworkprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteNetworkProfileResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeleteNetworkProfileResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    DeleteNetworkProfileResponse(const DeleteNetworkProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkProfileResponse)
    Q_DISABLE_COPY(DeleteNetworkProfileResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
