// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEUPDATESRESPONSE_H
#define QTAWS_LISTALLOWEDNODETYPEUPDATESRESPONSE_H

#include "memorydbresponse.h"
#include "listallowednodetypeupdatesrequest.h"

namespace QtAws {
namespace MemoryDb {

class ListAllowedNodeTypeUpdatesResponsePrivate;

class QTAWSMEMORYDB_EXPORT ListAllowedNodeTypeUpdatesResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    ListAllowedNodeTypeUpdatesResponse(const ListAllowedNodeTypeUpdatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAllowedNodeTypeUpdatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAllowedNodeTypeUpdatesResponse)
    Q_DISABLE_COPY(ListAllowedNodeTypeUpdatesResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
