// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWRESPONSE_H
#define QTAWS_DELETEFLOWRESPONSE_H

#include "appflowresponse.h"
#include "deleteflowrequest.h"

namespace QtAws {
namespace Appflow {

class DeleteFlowResponsePrivate;

class QTAWSAPPFLOW_EXPORT DeleteFlowResponse : public AppflowResponse {
    Q_OBJECT

public:
    DeleteFlowResponse(const DeleteFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowResponse)
    Q_DISABLE_COPY(DeleteFlowResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
