// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESRESPONSE_P_H
#define QTAWS_LISTSERVICESRESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServicesResponse;

class ListServicesResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit ListServicesResponsePrivate(ListServicesResponse * const q);

    void parseListServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServicesResponse)
    Q_DISABLE_COPY(ListServicesResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
