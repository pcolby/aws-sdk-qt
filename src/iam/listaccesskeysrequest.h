// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSKEYSREQUEST_H
#define QTAWS_LISTACCESSKEYSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListAccessKeysRequestPrivate;

class QTAWSIAM_EXPORT ListAccessKeysRequest : public IamRequest {

public:
    ListAccessKeysRequest(const ListAccessKeysRequest &other);
    ListAccessKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessKeysRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
