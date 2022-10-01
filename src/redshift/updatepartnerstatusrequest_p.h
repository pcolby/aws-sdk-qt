// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERSTATUSREQUEST_P_H
#define QTAWS_UPDATEPARTNERSTATUSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "updatepartnerstatusrequest.h"

namespace QtAws {
namespace Redshift {

class UpdatePartnerStatusRequest;

class UpdatePartnerStatusRequestPrivate : public RedshiftRequestPrivate {

public:
    UpdatePartnerStatusRequestPrivate(const RedshiftRequest::Action action,
                                   UpdatePartnerStatusRequest * const q);
    UpdatePartnerStatusRequestPrivate(const UpdatePartnerStatusRequestPrivate &other,
                                   UpdatePartnerStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePartnerStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
