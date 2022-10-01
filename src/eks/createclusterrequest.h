// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERREQUEST_H
#define QTAWS_CREATECLUSTERREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class CreateClusterRequestPrivate;

class QTAWSEKS_EXPORT CreateClusterRequest : public EksRequest {

public:
    CreateClusterRequest(const CreateClusterRequest &other);
    CreateClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
