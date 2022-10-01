// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSRESPONSE_H
#define QTAWS_LISTTHINGGROUPSRESPONSE_H

#include "iotresponse.h"
#include "listthinggroupsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsResponsePrivate;

class QTAWSIOT_EXPORT ListThingGroupsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingGroupsResponse(const ListThingGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingGroupsResponse)
    Q_DISABLE_COPY(ListThingGroupsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
