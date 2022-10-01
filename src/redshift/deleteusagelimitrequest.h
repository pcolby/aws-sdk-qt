// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITREQUEST_H
#define QTAWS_DELETEUSAGELIMITREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteUsageLimitRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteUsageLimitRequest : public RedshiftRequest {

public:
    DeleteUsageLimitRequest(const DeleteUsageLimitRequest &other);
    DeleteUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsageLimitRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
