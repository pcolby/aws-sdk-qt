// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMLPROVIDERREQUEST_P_H
#define QTAWS_DELETESAMLPROVIDERREQUEST_P_H

#include "iamrequest_p.h"
#include "deletesamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSAMLProviderRequest;

class DeleteSAMLProviderRequestPrivate : public IamRequestPrivate {

public:
    DeleteSAMLProviderRequestPrivate(const IamRequest::Action action,
                                   DeleteSAMLProviderRequest * const q);
    DeleteSAMLProviderRequestPrivate(const DeleteSAMLProviderRequestPrivate &other,
                                   DeleteSAMLProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSAMLProviderRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
