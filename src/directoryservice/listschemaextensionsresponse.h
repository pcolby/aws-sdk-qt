// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAEXTENSIONSRESPONSE_H
#define QTAWS_LISTSCHEMAEXTENSIONSRESPONSE_H

#include "directoryserviceresponse.h"
#include "listschemaextensionsrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListSchemaExtensionsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListSchemaExtensionsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    ListSchemaExtensionsResponse(const ListSchemaExtensionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSchemaExtensionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchemaExtensionsResponse)
    Q_DISABLE_COPY(ListSchemaExtensionsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
