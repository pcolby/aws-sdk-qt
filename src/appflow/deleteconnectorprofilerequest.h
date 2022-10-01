// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORPROFILEREQUEST_H
#define QTAWS_DELETECONNECTORPROFILEREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class DeleteConnectorProfileRequestPrivate;

class QTAWSAPPFLOW_EXPORT DeleteConnectorProfileRequest : public AppflowRequest {

public:
    DeleteConnectorProfileRequest(const DeleteConnectorProfileRequest &other);
    DeleteConnectorProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorProfileRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
