// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENODEREQUEST_H
#define QTAWS_ASSOCIATENODEREQUEST_H

#include "opsworkscmrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class AssociateNodeRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT AssociateNodeRequest : public OpsWorksCmRequest {

public:
    AssociateNodeRequest(const AssociateNodeRequest &other);
    AssociateNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateNodeRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
