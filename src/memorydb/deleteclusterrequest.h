// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERREQUEST_H
#define QTAWS_DELETECLUSTERREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteClusterRequestPrivate;

class QTAWSMEMORYDB_EXPORT DeleteClusterRequest : public MemoryDbRequest {

public:
    DeleteClusterRequest(const DeleteClusterRequest &other);
    DeleteClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
