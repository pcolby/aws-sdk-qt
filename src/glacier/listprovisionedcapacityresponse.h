// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCAPACITYRESPONSE_H
#define QTAWS_LISTPROVISIONEDCAPACITYRESPONSE_H

#include "glacierresponse.h"
#include "listprovisionedcapacityrequest.h"

namespace QtAws {
namespace Glacier {

class ListProvisionedCapacityResponsePrivate;

class QTAWSGLACIER_EXPORT ListProvisionedCapacityResponse : public GlacierResponse {
    Q_OBJECT

public:
    ListProvisionedCapacityResponse(const ListProvisionedCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisionedCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisionedCapacityResponse)
    Q_DISABLE_COPY(ListProvisionedCapacityResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
