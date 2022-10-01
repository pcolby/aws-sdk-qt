// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINPUTDEVICETRANSFERRESPONSE_H
#define QTAWS_REJECTINPUTDEVICETRANSFERRESPONSE_H

#include "medialiveresponse.h"
#include "rejectinputdevicetransferrequest.h"

namespace QtAws {
namespace MediaLive {

class RejectInputDeviceTransferResponsePrivate;

class QTAWSMEDIALIVE_EXPORT RejectInputDeviceTransferResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    RejectInputDeviceTransferResponse(const RejectInputDeviceTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectInputDeviceTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInputDeviceTransferResponse)
    Q_DISABLE_COPY(RejectInputDeviceTransferResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
