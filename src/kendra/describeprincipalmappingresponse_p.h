// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALMAPPINGRESPONSE_P_H
#define QTAWS_DESCRIBEPRINCIPALMAPPINGRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribePrincipalMappingResponse;

class DescribePrincipalMappingResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribePrincipalMappingResponsePrivate(DescribePrincipalMappingResponse * const q);

    void parseDescribePrincipalMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePrincipalMappingResponse)
    Q_DISABLE_COPY(DescribePrincipalMappingResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
