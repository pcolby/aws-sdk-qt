// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTACCESSREQUEST_H
#define QTAWS_GETENDPOINTACCESSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetEndpointAccessRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetEndpointAccessRequest : public RedshiftServerlessRequest {

public:
    GetEndpointAccessRequest(const GetEndpointAccessRequest &other);
    GetEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
