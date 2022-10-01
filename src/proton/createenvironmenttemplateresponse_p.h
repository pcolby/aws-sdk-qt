// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATERESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTTEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateResponse;

class CreateEnvironmentTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateEnvironmentTemplateResponsePrivate(CreateEnvironmentTemplateResponse * const q);

    void parseCreateEnvironmentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentTemplateResponse)
    Q_DISABLE_COPY(CreateEnvironmentTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
