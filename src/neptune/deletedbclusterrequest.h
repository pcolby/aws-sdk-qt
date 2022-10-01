// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERREQUEST_H
#define QTAWS_DELETEDBCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBClusterRequest : public NeptuneRequest {

public:
    DeleteDBClusterRequest(const DeleteDBClusterRequest &other);
    DeleteDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
