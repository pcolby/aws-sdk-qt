// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECONFIGHISTORYREQUEST_H
#define QTAWS_GETRESOURCECONFIGHISTORYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetResourceConfigHistoryRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetResourceConfigHistoryRequest : public ConfigServiceRequest {

public:
    GetResourceConfigHistoryRequest(const GetResourceConfigHistoryRequest &other);
    GetResourceConfigHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceConfigHistoryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
