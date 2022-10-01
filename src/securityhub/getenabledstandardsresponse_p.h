// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENABLEDSTANDARDSRESPONSE_P_H
#define QTAWS_GETENABLEDSTANDARDSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class GetEnabledStandardsResponse;

class GetEnabledStandardsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit GetEnabledStandardsResponsePrivate(GetEnabledStandardsResponse * const q);

    void parseGetEnabledStandardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnabledStandardsResponse)
    Q_DISABLE_COPY(GetEnabledStandardsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
