// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateVersionResponse;

class CreateEnvironmentTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateEnvironmentTemplateVersionResponsePrivate(CreateEnvironmentTemplateVersionResponse * const q);

    void parseCreateEnvironmentTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(CreateEnvironmentTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
