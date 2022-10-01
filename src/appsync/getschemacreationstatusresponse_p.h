// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMACREATIONSTATUSRESPONSE_P_H
#define QTAWS_GETSCHEMACREATIONSTATUSRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetSchemaCreationStatusResponse;

class GetSchemaCreationStatusResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetSchemaCreationStatusResponsePrivate(GetSchemaCreationStatusResponse * const q);

    void parseGetSchemaCreationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSchemaCreationStatusResponse)
    Q_DISABLE_COPY(GetSchemaCreationStatusResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
