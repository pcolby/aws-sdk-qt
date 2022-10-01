// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTROUTINGSREQUEST_H
#define QTAWS_LISTINPUTROUTINGSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListInputRoutingsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT ListInputRoutingsRequest : public IoTEventsRequest {

public:
    ListInputRoutingsRequest(const ListInputRoutingsRequest &other);
    ListInputRoutingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputRoutingsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
