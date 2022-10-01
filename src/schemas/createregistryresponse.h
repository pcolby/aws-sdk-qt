// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGISTRYRESPONSE_H
#define QTAWS_CREATEREGISTRYRESPONSE_H

#include "schemasresponse.h"
#include "createregistryrequest.h"

namespace QtAws {
namespace Schemas {

class CreateRegistryResponsePrivate;

class QTAWSSCHEMAS_EXPORT CreateRegistryResponse : public SchemasResponse {
    Q_OBJECT

public:
    CreateRegistryResponse(const CreateRegistryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRegistryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegistryResponse)
    Q_DISABLE_COPY(CreateRegistryResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
