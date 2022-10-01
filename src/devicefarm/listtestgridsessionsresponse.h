// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONSRESPONSE_H
#define QTAWS_LISTTESTGRIDSESSIONSRESPONSE_H

#include "devicefarmresponse.h"
#include "listtestgridsessionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridSessionsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListTestGridSessionsResponse(const ListTestGridSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTestGridSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridSessionsResponse)
    Q_DISABLE_COPY(ListTestGridSessionsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
