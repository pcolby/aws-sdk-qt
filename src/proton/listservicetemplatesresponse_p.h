// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATESRESPONSE_P_H
#define QTAWS_LISTSERVICETEMPLATESRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplatesResponse;

class ListServiceTemplatesResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListServiceTemplatesResponsePrivate(ListServiceTemplatesResponse * const q);

    void parseListServiceTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceTemplatesResponse)
    Q_DISABLE_COPY(ListServiceTemplatesResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
