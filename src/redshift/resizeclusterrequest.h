// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESIZECLUSTERREQUEST_H
#define QTAWS_RESIZECLUSTERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ResizeClusterRequestPrivate;

class QTAWSREDSHIFT_EXPORT ResizeClusterRequest : public RedshiftRequest {

public:
    ResizeClusterRequest(const ResizeClusterRequest &other);
    ResizeClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResizeClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
