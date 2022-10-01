// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTLABELSTASKRUNREQUEST_P_H
#define QTAWS_STARTEXPORTLABELSTASKRUNREQUEST_P_H

#include "gluerequest_p.h"
#include "startexportlabelstaskrunrequest.h"

namespace QtAws {
namespace Glue {

class StartExportLabelsTaskRunRequest;

class StartExportLabelsTaskRunRequestPrivate : public GlueRequestPrivate {

public:
    StartExportLabelsTaskRunRequestPrivate(const GlueRequest::Action action,
                                   StartExportLabelsTaskRunRequest * const q);
    StartExportLabelsTaskRunRequestPrivate(const StartExportLabelsTaskRunRequestPrivate &other,
                                   StartExportLabelsTaskRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartExportLabelsTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
