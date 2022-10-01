// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARAMETERGROUPREQUEST_H
#define QTAWS_CREATEPARAMETERGROUPREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateParameterGroupRequestPrivate;

class QTAWSMEMORYDB_EXPORT CreateParameterGroupRequest : public MemoryDbRequest {

public:
    CreateParameterGroupRequest(const CreateParameterGroupRequest &other);
    CreateParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateParameterGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
