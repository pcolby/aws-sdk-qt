// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEMARESPONSE_P_H
#define QTAWS_UPDATESCHEMARESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateSchemaResponse;

class UpdateSchemaResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit UpdateSchemaResponsePrivate(UpdateSchemaResponse * const q);

    void parseUpdateSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSchemaResponse)
    Q_DISABLE_COPY(UpdateSchemaResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
