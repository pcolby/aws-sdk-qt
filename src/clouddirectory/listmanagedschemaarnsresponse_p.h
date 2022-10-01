// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDSCHEMAARNSRESPONSE_P_H
#define QTAWS_LISTMANAGEDSCHEMAARNSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListManagedSchemaArnsResponse;

class ListManagedSchemaArnsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListManagedSchemaArnsResponsePrivate(ListManagedSchemaArnsResponse * const q);

    void parseListManagedSchemaArnsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedSchemaArnsResponse)
    Q_DISABLE_COPY(ListManagedSchemaArnsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
