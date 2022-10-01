// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEQUOTASRESPONSE_P_H
#define QTAWS_LISTSERVICEQUOTASRESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListServiceQuotasResponse;

class ListServiceQuotasResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit ListServiceQuotasResponsePrivate(ListServiceQuotasResponse * const q);

    void parseListServiceQuotasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceQuotasResponse)
    Q_DISABLE_COPY(ListServiceQuotasResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
