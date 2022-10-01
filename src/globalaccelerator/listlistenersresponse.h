// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLISTENERSRESPONSE_H
#define QTAWS_LISTLISTENERSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listlistenersrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListListenersResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListListenersResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListListenersResponse(const ListListenersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListListenersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListListenersResponse)
    Q_DISABLE_COPY(ListListenersResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
