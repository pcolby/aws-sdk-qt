// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHROOMREQUEST_H
#define QTAWS_ASSOCIATEDEVICEWITHROOMREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithRoomRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateDeviceWithRoomRequest : public AlexaForBusinessRequest {

public:
    AssociateDeviceWithRoomRequest(const AssociateDeviceWithRoomRequest &other);
    AssociateDeviceWithRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDeviceWithRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
