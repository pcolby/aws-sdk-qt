// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELICENSERESPONSE_P_H
#define QTAWS_ASSOCIATELICENSERESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class AssociateLicenseResponse;

class AssociateLicenseResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit AssociateLicenseResponsePrivate(AssociateLicenseResponse * const q);

    void parseAssociateLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateLicenseResponse)
    Q_DISABLE_COPY(AssociateLicenseResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
