// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGREQUEST_H
#define QTAWS_UPDATECLUSTERCONFIGREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class UpdateClusterConfigRequestPrivate;

class QTAWSEKS_EXPORT UpdateClusterConfigRequest : public EksRequest {

public:
    UpdateClusterConfigRequest(const UpdateClusterConfigRequest &other);
    UpdateClusterConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
