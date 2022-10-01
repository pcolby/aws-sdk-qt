// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGLISTENERRESPONSE_H
#define QTAWS_UPDATECUSTOMROUTINGLISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "updatecustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateCustomRoutingListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    UpdateCustomRoutingListenerResponse(const UpdateCustomRoutingListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCustomRoutingListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomRoutingListenerResponse)
    Q_DISABLE_COPY(UpdateCustomRoutingListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
