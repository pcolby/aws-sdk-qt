// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCLUSTERREQUEST_H
#define QTAWS_REBOOTCLUSTERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RebootClusterRequestPrivate;

class QTAWSREDSHIFT_EXPORT RebootClusterRequest : public RedshiftRequest {

public:
    RebootClusterRequest(const RebootClusterRequest &other);
    RebootClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
