// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITREQUEST_H
#define QTAWS_CREATEUSAGELIMITREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateUsageLimitRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateUsageLimitRequest : public RedshiftServerlessRequest {

public:
    CreateUsageLimitRequest(const CreateUsageLimitRequest &other);
    CreateUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
