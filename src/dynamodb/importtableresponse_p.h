// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTABLERESPONSE_P_H
#define QTAWS_IMPORTTABLERESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class ImportTableResponse;

class ImportTableResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit ImportTableResponsePrivate(ImportTableResponse * const q);

    void parseImportTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportTableResponse)
    Q_DISABLE_COPY(ImportTableResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
