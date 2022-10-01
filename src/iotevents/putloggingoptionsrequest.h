// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGOPTIONSREQUEST_H
#define QTAWS_PUTLOGGINGOPTIONSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class PutLoggingOptionsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT PutLoggingOptionsRequest : public IoTEventsRequest {

public:
    PutLoggingOptionsRequest(const PutLoggingOptionsRequest &other);
    PutLoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingOptionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
