// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATERESPONSE_P_H
#define QTAWS_GETSERVICETEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateResponse;

class GetServiceTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetServiceTemplateResponsePrivate(GetServiceTemplateResponse * const q);

    void parseGetServiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceTemplateResponse)
    Q_DISABLE_COPY(GetServiceTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
