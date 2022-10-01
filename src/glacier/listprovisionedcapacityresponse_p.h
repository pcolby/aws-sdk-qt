// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCAPACITYRESPONSE_P_H
#define QTAWS_LISTPROVISIONEDCAPACITYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class ListProvisionedCapacityResponse;

class ListProvisionedCapacityResponsePrivate : public GlacierResponsePrivate {

public:

    explicit ListProvisionedCapacityResponsePrivate(ListProvisionedCapacityResponse * const q);

    void parseListProvisionedCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProvisionedCapacityResponse)
    Q_DISABLE_COPY(ListProvisionedCapacityResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
