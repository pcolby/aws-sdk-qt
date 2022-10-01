// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMROOMRESPONSE_H
#define QTAWS_DISASSOCIATEDEVICEFROMROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "disassociatedevicefromroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateDeviceFromRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateDeviceFromRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DisassociateDeviceFromRoomResponse(const DisassociateDeviceFromRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDeviceFromRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDeviceFromRoomResponse)
    Q_DISABLE_COPY(DisassociateDeviceFromRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
