// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTTABLERESPONSE_H
#define QTAWS_IMPORTTABLERESPONSE_H

#include "dynamodbresponse.h"
#include "importtablerequest.h"

namespace QtAws {
namespace DynamoDb {

class ImportTableResponsePrivate;

class QTAWSDYNAMODB_EXPORT ImportTableResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ImportTableResponse(const ImportTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportTableResponse)
    Q_DISABLE_COPY(ImportTableResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
