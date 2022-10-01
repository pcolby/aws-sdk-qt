// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPIPELINEREQUEST_H
#define QTAWS_UPDATESERVICEPIPELINEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateServicePipelineRequestPrivate;

class QTAWSPROTON_EXPORT UpdateServicePipelineRequest : public ProtonRequest {

public:
    UpdateServicePipelineRequest(const UpdateServicePipelineRequest &other);
    UpdateServicePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServicePipelineRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
