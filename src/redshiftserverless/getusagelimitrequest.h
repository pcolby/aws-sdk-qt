// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGELIMITREQUEST_H
#define QTAWS_GETUSAGELIMITREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetUsageLimitRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetUsageLimitRequest : public RedshiftServerlessRequest {

public:
    GetUsageLimitRequest(const GetUsageLimitRequest &other);
    GetUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
