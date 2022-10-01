// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRAWMESSAGECONTENTRESPONSE_H
#define QTAWS_GETRAWMESSAGECONTENTRESPONSE_H

#include "workmailmessageflowresponse.h"
#include "getrawmessagecontentrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class GetRawMessageContentResponsePrivate;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT GetRawMessageContentResponse : public WorkMailMessageFlowResponse {
    Q_OBJECT

public:
    GetRawMessageContentResponse(const GetRawMessageContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRawMessageContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRawMessageContentResponse)
    Q_DISABLE_COPY(GetRawMessageContentResponse)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
