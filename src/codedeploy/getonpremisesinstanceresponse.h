// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETONPREMISESINSTANCERESPONSE_H
#define QTAWS_GETONPREMISESINSTANCERESPONSE_H

#include "codedeployresponse.h"
#include "getonpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetOnPremisesInstanceResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT GetOnPremisesInstanceResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    GetOnPremisesInstanceResponse(const GetOnPremisesInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOnPremisesInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOnPremisesInstanceResponse)
    Q_DISABLE_COPY(GetOnPremisesInstanceResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
