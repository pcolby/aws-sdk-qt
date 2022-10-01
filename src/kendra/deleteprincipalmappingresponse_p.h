// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRINCIPALMAPPINGRESPONSE_P_H
#define QTAWS_DELETEPRINCIPALMAPPINGRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeletePrincipalMappingResponse;

class DeletePrincipalMappingResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeletePrincipalMappingResponsePrivate(DeletePrincipalMappingResponse * const q);

    void parseDeletePrincipalMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePrincipalMappingResponse)
    Q_DISABLE_COPY(DeletePrincipalMappingResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
