// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERSTATUSREQUEST_H
#define QTAWS_UPDATEPARTNERSTATUSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class UpdatePartnerStatusRequestPrivate;

class QTAWSREDSHIFT_EXPORT UpdatePartnerStatusRequest : public RedshiftRequest {

public:
    UpdatePartnerStatusRequest(const UpdatePartnerStatusRequest &other);
    UpdatePartnerStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePartnerStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
