// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateVersionResponse;

class DeleteEnvironmentTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteEnvironmentTemplateVersionResponsePrivate(DeleteEnvironmentTemplateVersionResponse * const q);

    void parseDeleteEnvironmentTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentTemplateVersionResponse)
    Q_DISABLE_COPY(DeleteEnvironmentTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
