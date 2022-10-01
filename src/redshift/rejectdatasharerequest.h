// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDATASHAREREQUEST_H
#define QTAWS_REJECTDATASHAREREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RejectDataShareRequestPrivate;

class QTAWSREDSHIFT_EXPORT RejectDataShareRequest : public RedshiftRequest {

public:
    RejectDataShareRequest(const RejectDataShareRequest &other);
    RejectDataShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectDataShareRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
