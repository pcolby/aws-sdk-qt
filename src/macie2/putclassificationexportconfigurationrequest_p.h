// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "putclassificationexportconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class PutClassificationExportConfigurationRequest;

class PutClassificationExportConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    PutClassificationExportConfigurationRequestPrivate(const Macie2Request::Action action,
                                   PutClassificationExportConfigurationRequest * const q);
    PutClassificationExportConfigurationRequestPrivate(const PutClassificationExportConfigurationRequestPrivate &other,
                                   PutClassificationExportConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutClassificationExportConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
