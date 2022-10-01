// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERENGINEATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATESERVERENGINEATTRIBUTESREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "updateserverengineattributesrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class UpdateServerEngineAttributesRequest;

class UpdateServerEngineAttributesRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    UpdateServerEngineAttributesRequestPrivate(const OpsWorksCmRequest::Action action,
                                   UpdateServerEngineAttributesRequest * const q);
    UpdateServerEngineAttributesRequestPrivate(const UpdateServerEngineAttributesRequestPrivate &other,
                                   UpdateServerEngineAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServerEngineAttributesRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
