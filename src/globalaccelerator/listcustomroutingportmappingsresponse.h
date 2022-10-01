// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSRESPONSE_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSRESPONSE_H

#include "globalacceleratorresponse.h"
#include "listcustomroutingportmappingsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingPortMappingsResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    ListCustomRoutingPortMappingsResponse(const ListCustomRoutingPortMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomRoutingPortMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingPortMappingsResponse)
    Q_DISABLE_COPY(ListCustomRoutingPortMappingsResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
