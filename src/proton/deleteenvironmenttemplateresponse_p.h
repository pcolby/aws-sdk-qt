// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATERESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTTEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateResponse;

class DeleteEnvironmentTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteEnvironmentTemplateResponsePrivate(DeleteEnvironmentTemplateResponse * const q);

    void parseDeleteEnvironmentTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentTemplateResponse)
    Q_DISABLE_COPY(DeleteEnvironmentTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
