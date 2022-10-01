// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGLISTENERRESPONSE_H
#define QTAWS_DELETECUSTOMROUTINGLISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "deletecustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteCustomRoutingListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DeleteCustomRoutingListenerResponse(const DeleteCustomRoutingListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomRoutingListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomRoutingListenerResponse)
    Q_DISABLE_COPY(DeleteCustomRoutingListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
