// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELICENSERESPONSE_P_H
#define QTAWS_DISASSOCIATELICENSERESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class DisassociateLicenseResponse;

class DisassociateLicenseResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit DisassociateLicenseResponsePrivate(DisassociateLicenseResponse * const q);

    void parseDisassociateLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateLicenseResponse)
    Q_DISABLE_COPY(DisassociateLicenseResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
