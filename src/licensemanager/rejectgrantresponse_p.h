// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTGRANTRESPONSE_P_H
#define QTAWS_REJECTGRANTRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class RejectGrantResponse;

class RejectGrantResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit RejectGrantResponsePrivate(RejectGrantResponse * const q);

    void parseRejectGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectGrantResponse)
    Q_DISABLE_COPY(RejectGrantResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
