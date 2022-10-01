// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCCONNECTORREQUEST_H
#define QTAWS_DELETEVPCCONNECTORREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteVpcConnectorRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DeleteVpcConnectorRequest : public AppRunnerRequest {

public:
    DeleteVpcConnectorRequest(const DeleteVpcConnectorRequest &other);
    DeleteVpcConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcConnectorRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
