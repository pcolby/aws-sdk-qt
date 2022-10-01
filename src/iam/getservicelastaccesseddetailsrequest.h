// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELASTACCESSEDDETAILSREQUEST_H
#define QTAWS_GETSERVICELASTACCESSEDDETAILSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetServiceLastAccessedDetailsRequestPrivate;

class QTAWSIAM_EXPORT GetServiceLastAccessedDetailsRequest : public IamRequest {

public:
    GetServiceLastAccessedDetailsRequest(const GetServiceLastAccessedDetailsRequest &other);
    GetServiceLastAccessedDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceLastAccessedDetailsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
