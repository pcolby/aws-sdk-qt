// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTANDARDSCONTROLRESPONSE_P_H
#define QTAWS_UPDATESTANDARDSCONTROLRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class UpdateStandardsControlResponse;

class UpdateStandardsControlResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit UpdateStandardsControlResponsePrivate(UpdateStandardsControlResponse * const q);

    void parseUpdateStandardsControlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStandardsControlResponse)
    Q_DISABLE_COPY(UpdateStandardsControlResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
