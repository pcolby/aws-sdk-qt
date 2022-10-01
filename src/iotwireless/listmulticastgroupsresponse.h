// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSRESPONSE_H
#define QTAWS_LISTMULTICASTGROUPSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listmulticastgroupsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListMulticastGroupsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListMulticastGroupsResponse(const ListMulticastGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMulticastGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMulticastGroupsResponse)
    Q_DISABLE_COPY(ListMulticastGroupsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
