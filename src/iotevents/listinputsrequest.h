// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSREQUEST_H
#define QTAWS_LISTINPUTSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListInputsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT ListInputsRequest : public IoTEventsRequest {

public:
    ListInputsRequest(const ListInputsRequest &other);
    ListInputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
