// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROGRESSUPDATESTREAMSRESPONSE_P_H
#define QTAWS_LISTPROGRESSUPDATESTREAMSRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class ListProgressUpdateStreamsResponse;

class ListProgressUpdateStreamsResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit ListProgressUpdateStreamsResponsePrivate(ListProgressUpdateStreamsResponse * const q);

    void parseListProgressUpdateStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProgressUpdateStreamsResponse)
    Q_DISABLE_COPY(ListProgressUpdateStreamsResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
