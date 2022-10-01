// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPARAMETERGROUPREQUEST_H
#define QTAWS_RESETPARAMETERGROUPREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class ResetParameterGroupRequestPrivate;

class QTAWSMEMORYDB_EXPORT ResetParameterGroupRequest : public MemoryDbRequest {

public:
    ResetParameterGroupRequest(const ResetParameterGroupRequest &other);
    ResetParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetParameterGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
