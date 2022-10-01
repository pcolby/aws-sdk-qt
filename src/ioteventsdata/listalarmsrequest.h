// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMSREQUEST_H
#define QTAWS_LISTALARMSREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class ListAlarmsRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT ListAlarmsRequest : public IoTEventsDataRequest {

public:
    ListAlarmsRequest(const ListAlarmsRequest &other);
    ListAlarmsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmsRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
