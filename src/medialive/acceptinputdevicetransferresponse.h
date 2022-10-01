// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINPUTDEVICETRANSFERRESPONSE_H
#define QTAWS_ACCEPTINPUTDEVICETRANSFERRESPONSE_H

#include "medialiveresponse.h"
#include "acceptinputdevicetransferrequest.h"

namespace QtAws {
namespace MediaLive {

class AcceptInputDeviceTransferResponsePrivate;

class QTAWSMEDIALIVE_EXPORT AcceptInputDeviceTransferResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    AcceptInputDeviceTransferResponse(const AcceptInputDeviceTransferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptInputDeviceTransferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInputDeviceTransferResponse)
    Q_DISABLE_COPY(AcceptInputDeviceTransferResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
