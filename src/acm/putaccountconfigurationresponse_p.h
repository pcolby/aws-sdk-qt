// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTACCOUNTCONFIGURATIONRESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class PutAccountConfigurationResponse;

class PutAccountConfigurationResponsePrivate : public AcmResponsePrivate {

public:

    explicit PutAccountConfigurationResponsePrivate(PutAccountConfigurationResponse * const q);

    void parsePutAccountConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountConfigurationResponse)
    Q_DISABLE_COPY(PutAccountConfigurationResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
