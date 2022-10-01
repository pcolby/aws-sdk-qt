// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELOGLEVELREQUEST_H
#define QTAWS_GETRESOURCELOGLEVELREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceLogLevelRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetResourceLogLevelRequest : public IoTWirelessRequest {

public:
    GetResourceLogLevelRequest(const GetResourceLogLevelRequest &other);
    GetResourceLogLevelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceLogLevelRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
