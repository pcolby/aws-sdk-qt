// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLIEDSCHEMAARNSRESPONSE_P_H
#define QTAWS_LISTAPPLIEDSCHEMAARNSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListAppliedSchemaArnsResponse;

class ListAppliedSchemaArnsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListAppliedSchemaArnsResponsePrivate(ListAppliedSchemaArnsResponse * const q);

    void parseListAppliedSchemaArnsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppliedSchemaArnsResponse)
    Q_DISABLE_COPY(ListAppliedSchemaArnsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
