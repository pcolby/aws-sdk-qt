// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTLABELSTASKRUNREQUEST_P_H
#define QTAWS_STARTIMPORTLABELSTASKRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "startimportlabelstaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartImportLabelsTaskRunRequest;

class StartImportLabelsTaskRunRequestPrivate : public GlueRequestPrivate {

public:
    StartImportLabelsTaskRunRequestPrivate(const GlueRequest::Action action,
                                   StartImportLabelsTaskRunRequest * const q);
    StartImportLabelsTaskRunRequestPrivate(const StartImportLabelsTaskRunRequestPrivate &other,
                                   StartImportLabelsTaskRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImportLabelsTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
