// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINPUTDEVICETRANSFERRESPONSE_H
#define QTAWS_CANCELINPUTDEVICETRANSFERRESPONSE_H

#include "medialiveresponse.h"
#include "cancelinputdevicetransferrequest.h"

namespace QtAws {
namespace MediaLive {

class CancelInputDeviceTransferResponsePrivate;

class QTAWSMEDIALIVE_EXPORT CancelInputDeviceTransferResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    CancelInputDeviceTransferResponse(const CancelInputDeviceTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelInputDeviceTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelInputDeviceTransferResponse)
    Q_DISABLE_COPY(CancelInputDeviceTransferResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
