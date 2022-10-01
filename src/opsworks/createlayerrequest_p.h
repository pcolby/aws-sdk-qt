// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAYERREQUEST_P_H
#define QTAWS_CREATELAYERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "createlayerrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateLayerRequest;

class CreateLayerRequestPrivate : public OpsWorksRequestPrivate {

public:
    CreateLayerRequestPrivate(const OpsWorksRequest::Action action,
                                   CreateLayerRequest * const q);
    CreateLayerRequestPrivate(const CreateLayerRequestPrivate &other,
                                   CreateLayerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLayerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
