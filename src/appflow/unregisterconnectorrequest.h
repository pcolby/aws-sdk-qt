// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNREGISTERCONNECTORREQUEST_H
#define QTAWS_UNREGISTERCONNECTORREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class UnregisterConnectorRequestPrivate;

class QTAWSAPPFLOW_EXPORT UnregisterConnectorRequest : public AppflowRequest {

public:
    UnregisterConnectorRequest(const UnregisterConnectorRequest &other);
    UnregisterConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnregisterConnectorRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
