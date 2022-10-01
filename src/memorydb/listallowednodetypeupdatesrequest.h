// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEUPDATESREQUEST_H
#define QTAWS_LISTALLOWEDNODETYPEUPDATESREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class ListAllowedNodeTypeUpdatesRequestPrivate;

class QTAWSMEMORYDB_EXPORT ListAllowedNodeTypeUpdatesRequest : public MemoryDbRequest {

public:
    ListAllowedNodeTypeUpdatesRequest(const ListAllowedNodeTypeUpdatesRequest &other);
    ListAllowedNodeTypeUpdatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAllowedNodeTypeUpdatesRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
