// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateResponse;

class UpdateEnvironmentTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateEnvironmentTemplateResponsePrivate(UpdateEnvironmentTemplateResponse * const q);

    void parseUpdateEnvironmentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentTemplateResponse)
    Q_DISABLE_COPY(UpdateEnvironmentTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
