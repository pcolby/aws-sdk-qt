// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKPROFILERESPONSE_H
#define QTAWS_CREATENETWORKPROFILERESPONSE_H

#include "devicefarmresponse.h"
#include "createnetworkprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateNetworkProfileResponsePrivate;

class QTAWSDEVICEFARM_EXPORT CreateNetworkProfileResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    CreateNetworkProfileResponse(const CreateNetworkProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkProfileResponse)
    Q_DISABLE_COPY(CreateNetworkProfileResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
