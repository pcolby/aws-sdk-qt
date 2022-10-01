// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERREQUEST_H
#define QTAWS_CREATEDBCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT CreateDBClusterRequest : public NeptuneRequest {

public:
    CreateDBClusterRequest(const CreateDBClusterRequest &other);
    CreateDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
