// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERREQUEST_H
#define QTAWS_DELETEDBCLUSTERREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBClusterRequestPrivate;

class QTAWSDOCDB_EXPORT DeleteDBClusterRequest : public DocDbRequest {

public:
    DeleteDBClusterRequest(const DeleteDBClusterRequest &other);
    DeleteDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
