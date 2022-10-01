// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISCOVERERRESPONSE_H
#define QTAWS_UPDATEDISCOVERERRESPONSE_H

#include "schemasresponse.h"
#include "updatediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class UpdateDiscovererResponsePrivate;

class QTAWSSCHEMAS_EXPORT UpdateDiscovererResponse : public SchemasResponse {
    Q_OBJECT

public:
    UpdateDiscovererResponse(const UpdateDiscovererRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDiscovererRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDiscovererResponse)
    Q_DISABLE_COPY(UpdateDiscovererResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
