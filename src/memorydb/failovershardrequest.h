// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERSHARDREQUEST_H
#define QTAWS_FAILOVERSHARDREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class FailoverShardRequestPrivate;

class QTAWSMEMORYDB_EXPORT FailoverShardRequest : public MemoryDbRequest {

public:
    FailoverShardRequest(const FailoverShardRequest &other);
    FailoverShardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverShardRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
