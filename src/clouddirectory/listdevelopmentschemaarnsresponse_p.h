// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVELOPMENTSCHEMAARNSRESPONSE_P_H
#define QTAWS_LISTDEVELOPMENTSCHEMAARNSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListDevelopmentSchemaArnsResponse;

class ListDevelopmentSchemaArnsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListDevelopmentSchemaArnsResponsePrivate(ListDevelopmentSchemaArnsResponse * const q);

    void parseListDevelopmentSchemaArnsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDevelopmentSchemaArnsResponse)
    Q_DISABLE_COPY(ListDevelopmentSchemaArnsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
