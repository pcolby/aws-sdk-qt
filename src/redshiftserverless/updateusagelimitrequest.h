// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGELIMITREQUEST_H
#define QTAWS_UPDATEUSAGELIMITREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateUsageLimitRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT UpdateUsageLimitRequest : public RedshiftServerlessRequest {

public:
    UpdateUsageLimitRequest(const UpdateUsageLimitRequest &other);
    UpdateUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
