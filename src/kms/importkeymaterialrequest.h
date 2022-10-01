// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYMATERIALREQUEST_H
#define QTAWS_IMPORTKEYMATERIALREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ImportKeyMaterialRequestPrivate;

class QTAWSKMS_EXPORT ImportKeyMaterialRequest : public KmsRequest {

public:
    ImportKeyMaterialRequest(const ImportKeyMaterialRequest &other);
    ImportKeyMaterialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportKeyMaterialRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
