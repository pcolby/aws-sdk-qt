// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWRESPONSE_H
#define QTAWS_CREATEFLOWRESPONSE_H

#include "appflowresponse.h"
#include "createflowrequest.h"

namespace QtAws {
namespace Appflow {

class CreateFlowResponsePrivate;

class QTAWSAPPFLOW_EXPORT CreateFlowResponse : public AppflowResponse {
    Q_OBJECT

public:
    CreateFlowResponse(const CreateFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowResponse)
    Q_DISABLE_COPY(CreateFlowResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
