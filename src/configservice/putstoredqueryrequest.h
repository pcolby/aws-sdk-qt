// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTOREDQUERYREQUEST_H
#define QTAWS_PUTSTOREDQUERYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutStoredQueryRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutStoredQueryRequest : public ConfigServiceRequest {

public:
    PutStoredQueryRequest(const PutStoredQueryRequest &other);
    PutStoredQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStoredQueryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
