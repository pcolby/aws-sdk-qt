// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGLISTENERRESPONSE_H
#define QTAWS_CREATECUSTOMROUTINGLISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "createcustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT CreateCustomRoutingListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    CreateCustomRoutingListenerResponse(const CreateCustomRoutingListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomRoutingListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomRoutingListenerResponse)
    Q_DISABLE_COPY(CreateCustomRoutingListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
