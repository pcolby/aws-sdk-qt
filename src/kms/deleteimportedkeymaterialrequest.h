// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTEDKEYMATERIALREQUEST_H
#define QTAWS_DELETEIMPORTEDKEYMATERIALREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DeleteImportedKeyMaterialRequestPrivate;

class QTAWSKMS_EXPORT DeleteImportedKeyMaterialRequest : public KmsRequest {

public:
    DeleteImportedKeyMaterialRequest(const DeleteImportedKeyMaterialRequest &other);
    DeleteImportedKeyMaterialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImportedKeyMaterialRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
