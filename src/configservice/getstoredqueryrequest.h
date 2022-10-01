// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTOREDQUERYREQUEST_H
#define QTAWS_GETSTOREDQUERYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetStoredQueryRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetStoredQueryRequest : public ConfigServiceRequest {

public:
    GetStoredQueryRequest(const GetStoredQueryRequest &other);
    GetStoredQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStoredQueryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
