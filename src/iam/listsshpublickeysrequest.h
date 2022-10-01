// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSSHPUBLICKEYSREQUEST_H
#define QTAWS_LISTSSHPUBLICKEYSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListSSHPublicKeysRequestPrivate;

class QTAWSIAM_EXPORT ListSSHPublicKeysRequest : public IamRequest {

public:
    ListSSHPublicKeysRequest(const ListSSHPublicKeysRequest &other);
    ListSSHPublicKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSSHPublicKeysRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
