// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONACTIONSRESPONSE_H
#define QTAWS_LISTTESTGRIDSESSIONACTIONSRESPONSE_H

#include "devicefarmresponse.h"
#include "listtestgridsessionactionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionActionsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridSessionActionsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListTestGridSessionActionsResponse(const ListTestGridSessionActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTestGridSessionActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridSessionActionsResponse)
    Q_DISABLE_COPY(ListTestGridSessionActionsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
