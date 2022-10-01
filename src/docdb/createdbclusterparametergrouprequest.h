// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_CREATEDBCLUSTERPARAMETERGROUPREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class CreateDBClusterParameterGroupRequestPrivate;

class QTAWSDOCDB_EXPORT CreateDBClusterParameterGroupRequest : public DocDbRequest {

public:
    CreateDBClusterParameterGroupRequest(const CreateDBClusterParameterGroupRequest &other);
    CreateDBClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterParameterGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
