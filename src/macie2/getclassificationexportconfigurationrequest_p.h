// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_P_H
#define QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "getclassificationexportconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class GetClassificationExportConfigurationRequest;

class GetClassificationExportConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    GetClassificationExportConfigurationRequestPrivate(const Macie2Request::Action action,
                                   GetClassificationExportConfigurationRequest * const q);
    GetClassificationExportConfigurationRequestPrivate(const GetClassificationExportConfigurationRequestPrivate &other,
                                   GetClassificationExportConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClassificationExportConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
