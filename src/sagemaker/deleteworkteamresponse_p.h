// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKTEAMRESPONSE_P_H
#define QTAWS_DELETEWORKTEAMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkteamResponse;

class DeleteWorkteamResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteWorkteamResponsePrivate(DeleteWorkteamResponse * const q);

    void parseDeleteWorkteamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkteamResponse)
    Q_DISABLE_COPY(DeleteWorkteamResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
