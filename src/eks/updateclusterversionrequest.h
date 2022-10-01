// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERVERSIONREQUEST_H
#define QTAWS_UPDATECLUSTERVERSIONREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class UpdateClusterVersionRequestPrivate;

class QTAWSEKS_EXPORT UpdateClusterVersionRequest : public EksRequest {

public:
    UpdateClusterVersionRequest(const UpdateClusterVersionRequest &other);
    UpdateClusterVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterVersionRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
