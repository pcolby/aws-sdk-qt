// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPRINCIPALMAPPINGRESPONSE_P_H
#define QTAWS_PUTPRINCIPALMAPPINGRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class PutPrincipalMappingResponse;

class PutPrincipalMappingResponsePrivate : public KendraResponsePrivate {

public:

    explicit PutPrincipalMappingResponsePrivate(PutPrincipalMappingResponse * const q);

    void parsePutPrincipalMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPrincipalMappingResponse)
    Q_DISABLE_COPY(PutPrincipalMappingResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
