// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBCLUSTERREQUEST_H
#define QTAWS_REMOVEROLEFROMDBCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class RemoveRoleFromDBClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT RemoveRoleFromDBClusterRequest : public NeptuneRequest {

public:
    RemoveRoleFromDBClusterRequest(const RemoveRoleFromDBClusterRequest &other);
    RemoveRoleFromDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
