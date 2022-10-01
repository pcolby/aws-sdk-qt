// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEQUOTASRESPONSE_P_H
#define QTAWS_SERVICEQUOTASRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ServiceQuotas {

class ServiceQuotasResponse;

class ServiceQuotasResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ServiceQuotasResponsePrivate(ServiceQuotasResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ServiceQuotasResponse)
    Q_DISABLE_COPY(ServiceQuotasResponsePrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
