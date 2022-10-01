// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTACCESSREQUEST_H
#define QTAWS_CREATEENDPOINTACCESSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateEndpointAccessRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateEndpointAccessRequest : public RedshiftServerlessRequest {

public:
    CreateEndpointAccessRequest(const CreateEndpointAccessRequest &other);
    CreateEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
