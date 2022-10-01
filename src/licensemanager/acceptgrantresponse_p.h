// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTGRANTRESPONSE_P_H
#define QTAWS_ACCEPTGRANTRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class AcceptGrantResponse;

class AcceptGrantResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit AcceptGrantResponsePrivate(AcceptGrantResponse * const q);

    void parseAcceptGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptGrantResponse)
    Q_DISABLE_COPY(AcceptGrantResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
