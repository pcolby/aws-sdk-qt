// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGEREQUESTEXECUTIONRESPONSE_H
#define QTAWS_STARTCHANGEREQUESTEXECUTIONRESPONSE_H

#include "ssmresponse.h"
#include "startchangerequestexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class StartChangeRequestExecutionResponsePrivate;

class QTAWSSSM_EXPORT StartChangeRequestExecutionResponse : public SsmResponse {
    Q_OBJECT

public:
    StartChangeRequestExecutionResponse(const StartChangeRequestExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartChangeRequestExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChangeRequestExecutionResponse)
    Q_DISABLE_COPY(StartChangeRequestExecutionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
