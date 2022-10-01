// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATECLUSTERREQUEST_H
#define QTAWS_BATCHUPDATECLUSTERREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class BatchUpdateClusterRequestPrivate;

class QTAWSMEMORYDB_EXPORT BatchUpdateClusterRequest : public MemoryDbRequest {

public:
    BatchUpdateClusterRequest(const BatchUpdateClusterRequest &other);
    BatchUpdateClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateClusterRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
