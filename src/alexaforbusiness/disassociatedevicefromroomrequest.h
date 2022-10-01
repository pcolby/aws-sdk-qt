// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMROOMREQUEST_H
#define QTAWS_DISASSOCIATEDEVICEFROMROOMREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateDeviceFromRoomRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DisassociateDeviceFromRoomRequest : public AlexaForBusinessRequest {

public:
    DisassociateDeviceFromRoomRequest(const DisassociateDeviceFromRoomRequest &other);
    DisassociateDeviceFromRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDeviceFromRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
