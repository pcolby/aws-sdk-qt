// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEVERSIONSRESPONSE_P_H
#define QTAWS_LISTTEMPLATEVERSIONSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class ListTemplateVersionsResponse;

class ListTemplateVersionsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit ListTemplateVersionsResponsePrivate(ListTemplateVersionsResponse * const q);

    void parseListTemplateVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTemplateVersionsResponse)
    Q_DISABLE_COPY(ListTemplateVersionsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
