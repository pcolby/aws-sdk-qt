// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateVersionResponse;

class UpdateEnvironmentTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateEnvironmentTemplateVersionResponsePrivate(UpdateEnvironmentTemplateVersionResponse * const q);

    void parseUpdateEnvironmentTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(UpdateEnvironmentTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
