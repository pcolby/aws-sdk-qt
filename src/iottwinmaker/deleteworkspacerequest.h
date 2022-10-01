// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEREQUEST_H
#define QTAWS_DELETEWORKSPACEREQUEST_H

#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteWorkspaceRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteWorkspaceRequest : public IoTTwinMakerRequest {

public:
    DeleteWorkspaceRequest(const DeleteWorkspaceRequest &other);
    DeleteWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
