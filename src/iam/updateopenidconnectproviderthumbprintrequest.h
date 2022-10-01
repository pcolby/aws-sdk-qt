// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTREQUEST_H
#define QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateOpenIDConnectProviderThumbprintRequestPrivate;

class QTAWSIAM_EXPORT UpdateOpenIDConnectProviderThumbprintRequest : public IamRequest {

public:
    UpdateOpenIDConnectProviderThumbprintRequest(const UpdateOpenIDConnectProviderThumbprintRequest &other);
    UpdateOpenIDConnectProviderThumbprintRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOpenIDConnectProviderThumbprintRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
