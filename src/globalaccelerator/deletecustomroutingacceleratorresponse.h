// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGACCELERATORRESPONSE_H
#define QTAWS_DELETECUSTOMROUTINGACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "deletecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteCustomRoutingAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DeleteCustomRoutingAcceleratorResponse(const DeleteCustomRoutingAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomRoutingAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(DeleteCustomRoutingAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
