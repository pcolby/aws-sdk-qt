// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPIPELINEREQUEST_P_H
#define QTAWS_UPDATESERVICEPIPELINEREQUEST_P_H

#include "protonrequest_p.h"
#include "updateservicepipelinerequest.h"

namespace QtAws {
namespace Proton {

class UpdateServicePipelineRequest;

class UpdateServicePipelineRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateServicePipelineRequestPrivate(const ProtonRequest::Action action,
                                   UpdateServicePipelineRequest * const q);
    UpdateServicePipelineRequestPrivate(const UpdateServicePipelineRequestPrivate &other,
                                   UpdateServicePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServicePipelineRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
