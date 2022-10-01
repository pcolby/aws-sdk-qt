// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISCOVERERRESPONSE_H
#define QTAWS_CREATEDISCOVERERRESPONSE_H

#include "schemasresponse.h"
#include "creatediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class CreateDiscovererResponsePrivate;

class QTAWSSCHEMAS_EXPORT CreateDiscovererResponse : public SchemasResponse {
    Q_OBJECT

public:
    CreateDiscovererResponse(const CreateDiscovererRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDiscovererRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDiscovererResponse)
    Q_DISABLE_COPY(CreateDiscovererResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
