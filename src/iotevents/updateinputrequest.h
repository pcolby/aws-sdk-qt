// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTREQUEST_H
#define QTAWS_UPDATEINPUTREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateInputRequestPrivate;

class QTAWSIOTEVENTS_EXPORT UpdateInputRequest : public IoTEventsRequest {

public:
    UpdateInputRequest(const UpdateInputRequest &other);
    UpdateInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInputRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
