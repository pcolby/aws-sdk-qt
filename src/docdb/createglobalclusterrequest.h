// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALCLUSTERREQUEST_H
#define QTAWS_CREATEGLOBALCLUSTERREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class CreateGlobalClusterRequestPrivate;

class QTAWSDOCDB_EXPORT CreateGlobalClusterRequest : public DocDbRequest {

public:
    CreateGlobalClusterRequest(const CreateGlobalClusterRequest &other);
    CreateGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
