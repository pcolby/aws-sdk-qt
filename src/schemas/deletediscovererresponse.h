// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISCOVERERRESPONSE_H
#define QTAWS_DELETEDISCOVERERRESPONSE_H

#include "schemasresponse.h"
#include "deletediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteDiscovererResponsePrivate;

class QTAWSSCHEMAS_EXPORT DeleteDiscovererResponse : public SchemasResponse {
    Q_OBJECT

public:
    DeleteDiscovererResponse(const DeleteDiscovererRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDiscovererRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDiscovererResponse)
    Q_DISABLE_COPY(DeleteDiscovererResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
