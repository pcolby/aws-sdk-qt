// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSDEFAULTSERVICEQUOTASRESPONSE_P_H
#define QTAWS_LISTAWSDEFAULTSERVICEQUOTASRESPONSE_P_H

#include "servicequotasresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ListAWSDefaultServiceQuotasResponse;

class ListAWSDefaultServiceQuotasResponsePrivate : public ServiceQuotasResponsePrivate {

public:

    explicit ListAWSDefaultServiceQuotasResponsePrivate(ListAWSDefaultServiceQuotasResponse * const q);

    void parseListAWSDefaultServiceQuotasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAWSDefaultServiceQuotasResponse)
    Q_DISABLE_COPY(ListAWSDefaultServiceQuotasResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
