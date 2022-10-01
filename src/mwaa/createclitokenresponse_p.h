// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLITOKENRESPONSE_P_H
#define QTAWS_CREATECLITOKENRESPONSE_P_H

#include "mwaaresponse_p.h"

namespace QtAws {
namespace Mwaa {

class CreateCliTokenResponse;

class CreateCliTokenResponsePrivate : public MwaaResponsePrivate {

public:

    explicit CreateCliTokenResponsePrivate(CreateCliTokenResponse * const q);

    void parseCreateCliTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCliTokenResponse)
    Q_DISABLE_COPY(CreateCliTokenResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
