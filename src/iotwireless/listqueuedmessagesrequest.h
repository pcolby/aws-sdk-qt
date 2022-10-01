// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEDMESSAGESREQUEST_H
#define QTAWS_LISTQUEUEDMESSAGESREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListQueuedMessagesRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListQueuedMessagesRequest : public IoTWirelessRequest {

public:
    ListQueuedMessagesRequest(const ListQueuedMessagesRequest &other);
    ListQueuedMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueuedMessagesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
