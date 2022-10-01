// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSFORIMPORTREQUEST_P_H
#define QTAWS_GETPARAMETERSFORIMPORTREQUEST_P_H

#include "kmsrequest_p.h"
#include "getparametersforimportrequest.h"

namespace QtAws {
namespace Kms {

class GetParametersForImportRequest;

class GetParametersForImportRequestPrivate : public KmsRequestPrivate {

public:
    GetParametersForImportRequestPrivate(const KmsRequest::Action action,
                                   GetParametersForImportRequest * const q);
    GetParametersForImportRequestPrivate(const GetParametersForImportRequestPrivate &other,
                                   GetParametersForImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParametersForImportRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
