// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCCONNECTORREQUEST_H
#define QTAWS_CREATEVPCCONNECTORREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateVpcConnectorRequestPrivate;

class QTAWSAPPRUNNER_EXPORT CreateVpcConnectorRequest : public AppRunnerRequest {

public:
    CreateVpcConnectorRequest(const CreateVpcConnectorRequest &other);
    CreateVpcConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcConnectorRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
