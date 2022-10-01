// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKTEAMRESPONSE_P_H
#define QTAWS_CREATEWORKTEAMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkteamResponse;

class CreateWorkteamResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateWorkteamResponsePrivate(CreateWorkteamResponse * const q);

    void parseCreateWorkteamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkteamResponse)
    Q_DISABLE_COPY(CreateWorkteamResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
