// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGACCELERATORSRESPONSE_H
#define QTAWS_LISTCUSTOMROUTINGACCELERATORSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listcustomroutingacceleratorsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingAcceleratorsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingAcceleratorsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListCustomRoutingAcceleratorsResponse(const ListCustomRoutingAcceleratorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomRoutingAcceleratorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingAcceleratorsResponse)
    Q_DISABLE_COPY(ListCustomRoutingAcceleratorsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
