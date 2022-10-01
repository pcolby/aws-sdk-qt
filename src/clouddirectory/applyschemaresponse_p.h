// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSCHEMARESPONSE_P_H
#define QTAWS_APPLYSCHEMARESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ApplySchemaResponse;

class ApplySchemaResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ApplySchemaResponsePrivate(ApplySchemaResponse * const q);

    void parseApplySchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplySchemaResponse)
    Q_DISABLE_COPY(ApplySchemaResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
