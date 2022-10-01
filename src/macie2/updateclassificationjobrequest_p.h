// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFICATIONJOBREQUEST_P_H
#define QTAWS_UPDATECLASSIFICATIONJOBREQUEST_P_H

#include "macie2request_p.h"
#include "updateclassificationjobrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateClassificationJobRequest;

class UpdateClassificationJobRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateClassificationJobRequestPrivate(const Macie2Request::Action action,
                                   UpdateClassificationJobRequest * const q);
    UpdateClassificationJobRequestPrivate(const UpdateClassificationJobRequestPrivate &other,
                                   UpdateClassificationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateClassificationJobRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
