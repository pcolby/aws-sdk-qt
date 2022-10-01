// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMACREATIONRESPONSE_P_H
#define QTAWS_STARTSCHEMACREATIONRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class StartSchemaCreationResponse;

class StartSchemaCreationResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit StartSchemaCreationResponsePrivate(StartSchemaCreationResponse * const q);

    void parseStartSchemaCreationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSchemaCreationResponse)
    Q_DISABLE_COPY(StartSchemaCreationResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
