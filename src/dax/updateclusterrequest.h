// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERREQUEST_H
#define QTAWS_UPDATECLUSTERREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class UpdateClusterRequestPrivate;

class QTAWSDAX_EXPORT UpdateClusterRequest : public DaxRequest {

public:
    UpdateClusterRequest(const UpdateClusterRequest &other);
    UpdateClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
