// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERONPREMISESINSTANCERESPONSE_H
#define QTAWS_DEREGISTERONPREMISESINSTANCERESPONSE_H

#include "codedeployresponse.h"
#include "deregisteronpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeregisterOnPremisesInstanceResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT DeregisterOnPremisesInstanceResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    DeregisterOnPremisesInstanceResponse(const DeregisterOnPremisesInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterOnPremisesInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterOnPremisesInstanceResponse)
    Q_DISABLE_COPY(DeregisterOnPremisesInstanceResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
