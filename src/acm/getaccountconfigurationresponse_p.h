// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETACCOUNTCONFIGURATIONRESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class GetAccountConfigurationResponse;

class GetAccountConfigurationResponsePrivate : public AcmResponsePrivate {

public:

    explicit GetAccountConfigurationResponsePrivate(GetAccountConfigurationResponse * const q);

    void parseGetAccountConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountConfigurationResponse)
    Q_DISABLE_COPY(GetAccountConfigurationResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
