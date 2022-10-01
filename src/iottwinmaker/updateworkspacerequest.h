// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEREQUEST_H
#define QTAWS_UPDATEWORKSPACEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateWorkspaceRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT UpdateWorkspaceRequest : public IoTTwinMakerRequest {

public:
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &other);
    UpdateWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
