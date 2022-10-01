// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSFORIMPORTREQUEST_H
#define QTAWS_GETPARAMETERSFORIMPORTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GetParametersForImportRequestPrivate;

class QTAWSKMS_EXPORT GetParametersForImportRequest : public KmsRequest {

public:
    GetParametersForImportRequest(const GetParametersForImportRequest &other);
    GetParametersForImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParametersForImportRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
