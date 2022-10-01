// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLASSIFICATIONJOBREQUEST_P_H
#define QTAWS_CREATECLASSIFICATIONJOBREQUEST_P_H

#include "macie2request_p.h"
#include "createclassificationjobrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateClassificationJobRequest;

class CreateClassificationJobRequestPrivate : public Macie2RequestPrivate {

public:
    CreateClassificationJobRequestPrivate(const Macie2Request::Action action,
                                   CreateClassificationJobRequest * const q);
    CreateClassificationJobRequestPrivate(const CreateClassificationJobRequestPrivate &other,
                                   CreateClassificationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClassificationJobRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
