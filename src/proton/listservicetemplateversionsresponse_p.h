// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATEVERSIONSRESPONSE_P_H
#define QTAWS_LISTSERVICETEMPLATEVERSIONSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplateVersionsResponse;

class ListServiceTemplateVersionsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServiceTemplateVersionsResponsePrivate(ListServiceTemplateVersionsResponse * const q);

    void parseListServiceTemplateVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceTemplateVersionsResponse)
    Q_DISABLE_COPY(ListServiceTemplateVersionsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
