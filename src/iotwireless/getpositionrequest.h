// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONREQUEST_H
#define QTAWS_GETPOSITIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetPositionRequest : public IoTWirelessRequest {

public:
    GetPositionRequest(const GetPositionRequest &other);
    GetPositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPositionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
