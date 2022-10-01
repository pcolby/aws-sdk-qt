// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORPROFILEREQUEST_H
#define QTAWS_CREATECONNECTORPROFILEREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class CreateConnectorProfileRequestPrivate;

class QTAWSAPPFLOW_EXPORT CreateConnectorProfileRequest : public AppflowRequest {

public:
    CreateConnectorProfileRequest(const CreateConnectorProfileRequest &other);
    CreateConnectorProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectorProfileRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
