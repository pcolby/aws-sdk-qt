// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVERERSRESPONSE_H
#define QTAWS_LISTDISCOVERERSRESPONSE_H

#include "schemasresponse.h"
#include "listdiscoverersrequest.h"

namespace QtAws {
namespace Schemas {

class ListDiscoverersResponsePrivate;

class QTAWSSCHEMAS_EXPORT ListDiscoverersResponse : public SchemasResponse {
    Q_OBJECT

public:
    ListDiscoverersResponse(const ListDiscoverersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDiscoverersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDiscoverersResponse)
    Q_DISABLE_COPY(ListDiscoverersResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
