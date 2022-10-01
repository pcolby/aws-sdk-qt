// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTOREDQUERIESREQUEST_H
#define QTAWS_LISTSTOREDQUERIESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class ListStoredQueriesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT ListStoredQueriesRequest : public ConfigServiceRequest {

public:
    ListStoredQueriesRequest(const ListStoredQueriesRequest &other);
    ListStoredQueriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStoredQueriesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
