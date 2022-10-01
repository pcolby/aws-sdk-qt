// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_MODIFYCLUSTERPARAMETERGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterParameterGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterParameterGroupRequest : public RedshiftRequest {

public:
    ModifyClusterParameterGroupRequest(const ModifyClusterParameterGroupRequest &other);
    ModifyClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterParameterGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
