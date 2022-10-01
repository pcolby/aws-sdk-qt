// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYRESPONSE_H
#define QTAWS_DELETEREGISTRYRESPONSE_H

#include "schemasresponse.h"
#include "deleteregistryrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteRegistryResponsePrivate;

class QTAWSSCHEMAS_EXPORT DeleteRegistryResponse : public SchemasResponse {
    Q_OBJECT

public:
    DeleteRegistryResponse(const DeleteRegistryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRegistryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegistryResponse)
    Q_DISABLE_COPY(DeleteRegistryResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
