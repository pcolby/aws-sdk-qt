// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTACCESSREQUEST_H
#define QTAWS_UPDATEENDPOINTACCESSREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateEndpointAccessRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT UpdateEndpointAccessRequest : public RedshiftServerlessRequest {

public:
    UpdateEndpointAccessRequest(const UpdateEndpointAccessRequest &other);
    UpdateEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointAccessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
