// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATERESPONSE_P_H
#define QTAWS_GETENVIRONMENTTEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateResponse;

class GetEnvironmentTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetEnvironmentTemplateResponsePrivate(GetEnvironmentTemplateResponse * const q);

    void parseGetEnvironmentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentTemplateResponse)
    Q_DISABLE_COPY(GetEnvironmentTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
