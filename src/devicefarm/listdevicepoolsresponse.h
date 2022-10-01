// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOOLSRESPONSE_H
#define QTAWS_LISTDEVICEPOOLSRESPONSE_H

#include "devicefarmresponse.h"
#include "listdevicepoolsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListDevicePoolsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListDevicePoolsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListDevicePoolsResponse(const ListDevicePoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDevicePoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicePoolsResponse)
    Q_DISABLE_COPY(ListDevicePoolsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
