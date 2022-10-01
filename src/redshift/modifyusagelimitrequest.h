// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSAGELIMITREQUEST_H
#define QTAWS_MODIFYUSAGELIMITREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyUsageLimitRequestPrivate;

class QTAWSREDSHIFT_EXPORT ModifyUsageLimitRequest : public RedshiftRequest {

public:
    ModifyUsageLimitRequest(const ModifyUsageLimitRequest &other);
    ModifyUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyUsageLimitRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
