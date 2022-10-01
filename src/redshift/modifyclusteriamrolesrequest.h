// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERIAMROLESREQUEST_H
#define QTAWS_MODIFYCLUSTERIAMROLESREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterIamRolesRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterIamRolesRequest : public RedshiftRequest {

public:
    ModifyClusterIamRolesRequest(const ModifyClusterIamRolesRequest &other);
    ModifyClusterIamRolesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterIamRolesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
