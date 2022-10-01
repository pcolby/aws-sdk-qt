// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGLISTENERSRESPONSE_H
#define QTAWS_LISTCUSTOMROUTINGLISTENERSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listcustomroutinglistenersrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingListenersResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingListenersResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListCustomRoutingListenersResponse(const ListCustomRoutingListenersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomRoutingListenersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingListenersResponse)
    Q_DISABLE_COPY(ListCustomRoutingListenersResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
