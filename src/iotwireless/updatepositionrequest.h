// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOSITIONREQUEST_H
#define QTAWS_UPDATEPOSITIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePositionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdatePositionRequest : public IoTWirelessRequest {

public:
    UpdatePositionRequest(const UpdatePositionRequest &other);
    UpdatePositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePositionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
