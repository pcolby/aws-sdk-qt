// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTREQUEST_H
#define QTAWS_CREATEINPUTREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateInputRequestPrivate;

class QTAWSIOTEVENTS_EXPORT CreateInputRequest : public IoTEventsRequest {

public:
    CreateInputRequest(const CreateInputRequest &other);
    CreateInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInputRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
