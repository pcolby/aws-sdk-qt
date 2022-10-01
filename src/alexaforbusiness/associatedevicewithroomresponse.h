// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHROOMRESPONSE_H
#define QTAWS_ASSOCIATEDEVICEWITHROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "associatedevicewithroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateDeviceWithRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    AssociateDeviceWithRoomResponse(const AssociateDeviceWithRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDeviceWithRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDeviceWithRoomResponse)
    Q_DISABLE_COPY(AssociateDeviceWithRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
