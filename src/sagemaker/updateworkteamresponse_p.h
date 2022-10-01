// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKTEAMRESPONSE_P_H
#define QTAWS_UPDATEWORKTEAMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkteamResponse;

class UpdateWorkteamResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateWorkteamResponsePrivate(UpdateWorkteamResponse * const q);

    void parseUpdateWorkteamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkteamResponse)
    Q_DISABLE_COPY(UpdateWorkteamResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
