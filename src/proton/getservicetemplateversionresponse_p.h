// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_GETSERVICETEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateVersionResponse;

class GetServiceTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetServiceTemplateVersionResponsePrivate(GetServiceTemplateVersionResponse * const q);

    void parseGetServiceTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceTemplateVersionResponse)
    Q_DISABLE_COPY(GetServiceTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
