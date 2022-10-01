// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERDBREVISIONREQUEST_H
#define QTAWS_MODIFYCLUSTERDBREVISIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterDbRevisionRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyClusterDbRevisionRequest : public RedshiftRequest {

public:
    ModifyClusterDbRevisionRequest(const ModifyClusterDbRevisionRequest &other);
    ModifyClusterDbRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClusterDbRevisionRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
