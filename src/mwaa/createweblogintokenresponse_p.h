// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBLOGINTOKENRESPONSE_P_H
#define QTAWS_CREATEWEBLOGINTOKENRESPONSE_P_H

#include "mwaaresponse_p.h"

namespace QtAws {
namespace Mwaa {

class CreateWebLoginTokenResponse;

class CreateWebLoginTokenResponsePrivate : public MwaaResponsePrivate {

public:

    explicit CreateWebLoginTokenResponsePrivate(CreateWebLoginTokenResponse * const q);

    void parseCreateWebLoginTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWebLoginTokenResponse)
    Q_DISABLE_COPY(CreateWebLoginTokenResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
