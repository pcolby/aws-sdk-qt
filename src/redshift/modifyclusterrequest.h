// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERREQUEST_H
#define QTAWS_MODIFYCLUSTERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterRequest : public RedshiftRequest {

public:
    ModifyClusterRequest(const ModifyClusterRequest &other);
    ModifyClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
