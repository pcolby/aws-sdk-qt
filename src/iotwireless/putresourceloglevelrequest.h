// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCELOGLEVELREQUEST_H
#define QTAWS_PUTRESOURCELOGLEVELREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class PutResourceLogLevelRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT PutResourceLogLevelRequest : public IoTWirelessRequest {

public:
    PutResourceLogLevelRequest(const PutResourceLogLevelRequest &other);
    PutResourceLogLevelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourceLogLevelRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
