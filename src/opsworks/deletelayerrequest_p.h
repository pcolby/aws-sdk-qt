// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERREQUEST_P_H
#define QTAWS_DELETELAYERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "deletelayerrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteLayerRequest;

class DeleteLayerRequestPrivate : public OpsWorksRequestPrivate {

public:
    DeleteLayerRequestPrivate(const OpsWorksRequest::Action action,
                                   DeleteLayerRequest * const q);
    DeleteLayerRequestPrivate(const DeleteLayerRequestPrivate &other,
                                   DeleteLayerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLayerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
