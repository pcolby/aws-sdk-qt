// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_GETENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateVersionResponse;

class GetEnvironmentTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetEnvironmentTemplateVersionResponsePrivate(GetEnvironmentTemplateVersionResponse * const q);

    void parseGetEnvironmentTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(GetEnvironmentTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
