// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATERESPONSE_P_H
#define QTAWS_DELETESERVICETEMPLATERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateResponse;

class DeleteServiceTemplateResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteServiceTemplateResponsePrivate(DeleteServiceTemplateResponse * const q);

    void parseDeleteServiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceTemplateResponse)
    Q_DISABLE_COPY(DeleteServiceTemplateResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
