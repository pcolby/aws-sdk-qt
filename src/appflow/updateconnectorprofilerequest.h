// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORPROFILEREQUEST_H
#define QTAWS_UPDATECONNECTORPROFILEREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class UpdateConnectorProfileRequestPrivate;

class QTAWSAPPFLOW_EXPORT UpdateConnectorProfileRequest : public AppflowRequest {

public:
    UpdateConnectorProfileRequest(const UpdateConnectorProfileRequest &other);
    UpdateConnectorProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectorProfileRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
