// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUOTATASKSREQUEST_H
#define QTAWS_LISTFUOTATASKSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListFuotaTasksRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListFuotaTasksRequest : public IoTWirelessRequest {

public:
    ListFuotaTasksRequest(const ListFuotaTasksRequest &other);
    ListFuotaTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFuotaTasksRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
