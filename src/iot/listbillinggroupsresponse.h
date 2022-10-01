// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPSRESPONSE_H
#define QTAWS_LISTBILLINGGROUPSRESPONSE_H

#include "iotresponse.h"
#include "listbillinggroupsrequest.h"

namespace QtAws {
namespace IoT {

class ListBillingGroupsResponsePrivate;

class QTAWSIOT_EXPORT ListBillingGroupsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListBillingGroupsResponse(const ListBillingGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBillingGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBillingGroupsResponse)
    Q_DISABLE_COPY(ListBillingGroupsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
