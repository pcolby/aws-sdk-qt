// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_CREATESERVICETEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateVersionResponse;

class CreateServiceTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateServiceTemplateVersionResponsePrivate(CreateServiceTemplateVersionResponse * const q);

    void parseCreateServiceTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceTemplateVersionResponse)
    Q_DISABLE_COPY(CreateServiceTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
