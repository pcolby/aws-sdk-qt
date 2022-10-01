// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBREQUEST_P_H
#define QTAWS_GETIMPORTJOBREQUEST_P_H

#include "sesv2request_p.h"
#include "getimportjobrequest.h"

namespace QtAws {
namespace SESv2 {

class GetImportJobRequest;

class GetImportJobRequestPrivate : public SESv2RequestPrivate {

public:
    GetImportJobRequestPrivate(const SESv2Request::Action action,
                                   GetImportJobRequest * const q);
    GetImportJobRequestPrivate(const GetImportJobRequestPrivate &other,
                                   GetImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImportJobRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
