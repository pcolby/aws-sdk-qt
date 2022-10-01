// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITREQUEST_H
#define QTAWS_CREATEUSAGELIMITREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateUsageLimitRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateUsageLimitRequest : public RedshiftRequest {

public:
    CreateUsageLimitRequest(const CreateUsageLimitRequest &other);
    CreateUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsageLimitRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
