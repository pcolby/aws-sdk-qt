// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSERVERENGINEATTRIBUTEREQUEST_P_H
#define QTAWS_EXPORTSERVERENGINEATTRIBUTEREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "exportserverengineattributerequest.h"

namespace QtAws {
namespace OpsWorksCm {

class ExportServerEngineAttributeRequest;

class ExportServerEngineAttributeRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    ExportServerEngineAttributeRequestPrivate(const OpsWorksCmRequest::Action action,
                                   ExportServerEngineAttributeRequest * const q);
    ExportServerEngineAttributeRequestPrivate(const ExportServerEngineAttributeRequestPrivate &other,
                                   ExportServerEngineAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportServerEngineAttributeRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
