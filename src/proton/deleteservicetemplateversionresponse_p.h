// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_DELETESERVICETEMPLATEVERSIONRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateVersionResponse;

class DeleteServiceTemplateVersionResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteServiceTemplateVersionResponsePrivate(DeleteServiceTemplateVersionResponse * const q);

    void parseDeleteServiceTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceTemplateVersionResponse)
    Q_DISABLE_COPY(DeleteServiceTemplateVersionResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
