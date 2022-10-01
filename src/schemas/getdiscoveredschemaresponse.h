// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVEREDSCHEMARESPONSE_H
#define QTAWS_GETDISCOVEREDSCHEMARESPONSE_H

#include "schemasresponse.h"
#include "getdiscoveredschemarequest.h"

namespace QtAws {
namespace Schemas {

class GetDiscoveredSchemaResponsePrivate;

class QTAWSSCHEMAS_EXPORT GetDiscoveredSchemaResponse : public SchemasResponse {
    Q_OBJECT

public:
    GetDiscoveredSchemaResponse(const GetDiscoveredSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDiscoveredSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiscoveredSchemaResponse)
    Q_DISABLE_COPY(GetDiscoveredSchemaResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
