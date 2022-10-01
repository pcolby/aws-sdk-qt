// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAFROMJSONRESPONSE_P_H
#define QTAWS_PUTSCHEMAFROMJSONRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class PutSchemaFromJsonResponse;

class PutSchemaFromJsonResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit PutSchemaFromJsonResponsePrivate(PutSchemaFromJsonResponse * const q);

    void parsePutSchemaFromJsonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSchemaFromJsonResponse)
    Q_DISABLE_COPY(PutSchemaFromJsonResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
