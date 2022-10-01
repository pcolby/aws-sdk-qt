// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTOREDQUERYREQUEST_H
#define QTAWS_DELETESTOREDQUERYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteStoredQueryRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteStoredQueryRequest : public ConfigServiceRequest {

public:
    DeleteStoredQueryRequest(const DeleteStoredQueryRequest &other);
    DeleteStoredQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStoredQueryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
