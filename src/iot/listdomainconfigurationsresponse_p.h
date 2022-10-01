// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTDOMAINCONFIGURATIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListDomainConfigurationsResponse;

class ListDomainConfigurationsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListDomainConfigurationsResponsePrivate(ListDomainConfigurationsResponse * const q);

    void parseListDomainConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainConfigurationsResponse)
    Q_DISABLE_COPY(ListDomainConfigurationsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
