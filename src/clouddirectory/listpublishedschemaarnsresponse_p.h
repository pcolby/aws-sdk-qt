// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHEDSCHEMAARNSRESPONSE_P_H
#define QTAWS_LISTPUBLISHEDSCHEMAARNSRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListPublishedSchemaArnsResponse;

class ListPublishedSchemaArnsResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListPublishedSchemaArnsResponsePrivate(ListPublishedSchemaArnsResponse * const q);

    void parseListPublishedSchemaArnsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPublishedSchemaArnsResponse)
    Q_DISABLE_COPY(ListPublishedSchemaArnsResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
