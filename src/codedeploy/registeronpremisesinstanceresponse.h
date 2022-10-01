// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERONPREMISESINSTANCERESPONSE_H
#define QTAWS_REGISTERONPREMISESINSTANCERESPONSE_H

#include "codedeployresponse.h"
#include "registeronpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterOnPremisesInstanceResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT RegisterOnPremisesInstanceResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    RegisterOnPremisesInstanceResponse(const RegisterOnPremisesInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterOnPremisesInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterOnPremisesInstanceResponse)
    Q_DISABLE_COPY(RegisterOnPremisesInstanceResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
