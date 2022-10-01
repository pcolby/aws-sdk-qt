// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESPACKAGESRESPONSE_P_H
#define QTAWS_LISTRULESPACKAGESRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class ListRulesPackagesResponse;

class ListRulesPackagesResponsePrivate : public InspectorResponsePrivate {

public:

    explicit ListRulesPackagesResponsePrivate(ListRulesPackagesResponse * const q);

    void parseListRulesPackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRulesPackagesResponse)
    Q_DISABLE_COPY(ListRulesPackagesResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
