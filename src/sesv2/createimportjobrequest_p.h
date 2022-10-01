// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEIMPORTJOBREQUEST_P_H

#include "sesv2request_p.h"
#include "createimportjobrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateImportJobRequest;

class CreateImportJobRequestPrivate : public SESv2RequestPrivate {

public:
    CreateImportJobRequestPrivate(const SESv2Request::Action action,
                                   CreateImportJobRequest * const q);
    CreateImportJobRequestPrivate(const CreateImportJobRequestPrivate &other,
                                   CreateImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImportJobRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
