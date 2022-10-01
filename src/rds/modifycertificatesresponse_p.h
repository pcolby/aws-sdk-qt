// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCERTIFICATESRESPONSE_P_H
#define QTAWS_MODIFYCERTIFICATESRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyCertificatesResponse;

class ModifyCertificatesResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyCertificatesResponsePrivate(ModifyCertificatesResponse * const q);

    void parseModifyCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCertificatesResponse)
    Q_DISABLE_COPY(ModifyCertificatesResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
