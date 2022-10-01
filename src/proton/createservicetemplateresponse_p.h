// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATERESPONSE_P_H
#define QTAWS_CREATESERVICETEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateResponse;

class CreateServiceTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateServiceTemplateResponsePrivate(CreateServiceTemplateResponse * const q);

    void parseCreateServiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceTemplateResponse)
    Q_DISABLE_COPY(CreateServiceTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
