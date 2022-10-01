// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAASJSONRESPONSE_P_H
#define QTAWS_GETSCHEMAASJSONRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetSchemaAsJsonResponse;

class GetSchemaAsJsonResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetSchemaAsJsonResponsePrivate(GetSchemaAsJsonResponse * const q);

    void parseGetSchemaAsJsonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSchemaAsJsonResponse)
    Q_DISABLE_COPY(GetSchemaAsJsonResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
