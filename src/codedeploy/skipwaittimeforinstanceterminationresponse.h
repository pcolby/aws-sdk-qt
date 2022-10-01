// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONRESPONSE_H
#define QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONRESPONSE_H

#include "codedeployresponse.h"
#include "skipwaittimeforinstanceterminationrequest.h"

namespace QtAws {
namespace CodeDeploy {

class SkipWaitTimeForInstanceTerminationResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT SkipWaitTimeForInstanceTerminationResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    SkipWaitTimeForInstanceTerminationResponse(const SkipWaitTimeForInstanceTerminationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SkipWaitTimeForInstanceTerminationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SkipWaitTimeForInstanceTerminationResponse)
    Q_DISABLE_COPY(SkipWaitTimeForInstanceTerminationResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
