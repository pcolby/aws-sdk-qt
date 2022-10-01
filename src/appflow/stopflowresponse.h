// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWRESPONSE_H
#define QTAWS_STOPFLOWRESPONSE_H

#include "appflowresponse.h"
#include "stopflowrequest.h"

namespace QtAws {
namespace Appflow {

class StopFlowResponsePrivate;

class QTAWSAPPFLOW_EXPORT StopFlowResponse : public AppflowResponse {
    Q_OBJECT

public:
    StopFlowResponse(const StopFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFlowResponse)
    Q_DISABLE_COPY(StopFlowResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
