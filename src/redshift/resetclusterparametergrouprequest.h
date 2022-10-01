// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_RESETCLUSTERPARAMETERGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ResetClusterParameterGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT ResetClusterParameterGroupRequest : public RedshiftRequest {

public:
    ResetClusterParameterGroupRequest(const ResetClusterParameterGroupRequest &other);
    ResetClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
