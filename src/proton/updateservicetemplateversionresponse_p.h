// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_UPDATESERVICETEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateVersionResponse;

class UpdateServiceTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateServiceTemplateVersionResponsePrivate(UpdateServiceTemplateVersionResponse * const q);

    void parseUpdateServiceTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceTemplateVersionResponse)
    Q_DISABLE_COPY(UpdateServiceTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
