// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONNECTORREQUEST_H
#define QTAWS_REGISTERCONNECTORREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class RegisterConnectorRequestPrivate;

class QTAWSAPPFLOW_EXPORT RegisterConnectorRequest : public AppflowRequest {

public:
    RegisterConnectorRequest(const RegisterConnectorRequest &other);
    RegisterConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterConnectorRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
