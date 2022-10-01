// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEASSETSREQUEST_P_H
#define QTAWS_DISASSOCIATEASSETSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "disassociateassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DisassociateAssetsRequest;

class DisassociateAssetsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DisassociateAssetsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DisassociateAssetsRequest * const q);
    DisassociateAssetsRequestPrivate(const DisassociateAssetsRequestPrivate &other,
                                   DisassociateAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
