// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROGRESSUPDATESTREAMRESPONSE_P_H
#define QTAWS_CREATEPROGRESSUPDATESTREAMRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class CreateProgressUpdateStreamResponse;

class CreateProgressUpdateStreamResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit CreateProgressUpdateStreamResponsePrivate(CreateProgressUpdateStreamResponse * const q);

    void parseCreateProgressUpdateStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProgressUpdateStreamResponse)
    Q_DISABLE_COPY(CreateProgressUpdateStreamResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
