// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATERESPONSE_P_H
#define QTAWS_UPDATESERVICETEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateResponse;

class UpdateServiceTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateServiceTemplateResponsePrivate(UpdateServiceTemplateResponse * const q);

    void parseUpdateServiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceTemplateResponse)
    Q_DISABLE_COPY(UpdateServiceTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
