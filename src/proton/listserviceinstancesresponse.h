// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCESRESPONSE_H
#define QTAWS_LISTSERVICEINSTANCESRESPONSE_H

#include "protonresponse.h"
#include "listserviceinstancesrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstancesResponsePrivate;

class QTAWSPROTON_EXPORT ListServiceInstancesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServiceInstancesResponse(const ListServiceInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceInstancesResponse)
    Q_DISABLE_COPY(ListServiceInstancesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
