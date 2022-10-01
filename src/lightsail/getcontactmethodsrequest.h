// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTMETHODSREQUEST_H
#define QTAWS_GETCONTACTMETHODSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContactMethodsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContactMethodsRequest : public LightsailRequest {

public:
    GetContactMethodsRequest(const GetContactMethodsRequest &other);
    GetContactMethodsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactMethodsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
