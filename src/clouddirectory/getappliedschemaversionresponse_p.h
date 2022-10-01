// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLIEDSCHEMAVERSIONRESPONSE_P_H
#define QTAWS_GETAPPLIEDSCHEMAVERSIONRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetAppliedSchemaVersionResponse;

class GetAppliedSchemaVersionResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetAppliedSchemaVersionResponsePrivate(GetAppliedSchemaVersionResponse * const q);

    void parseGetAppliedSchemaVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppliedSchemaVersionResponse)
    Q_DISABLE_COPY(GetAppliedSchemaVersionResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
