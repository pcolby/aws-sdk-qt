// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASREQUEST_H
#define QTAWS_DELETEALIASREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DeleteAliasRequestPrivate;

class QTAWSKMS_EXPORT DeleteAliasRequest : public KmsRequest {

public:
    DeleteAliasRequest(const DeleteAliasRequest &other);
    DeleteAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAliasRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
