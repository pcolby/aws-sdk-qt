// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRAWMESSAGECONTENTRESPONSE_H
#define QTAWS_PUTRAWMESSAGECONTENTRESPONSE_H

#include "workmailmessageflowresponse.h"
#include "putrawmessagecontentrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class PutRawMessageContentResponsePrivate;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT PutRawMessageContentResponse : public WorkMailMessageFlowResponse {
    Q_OBJECT

public:
    PutRawMessageContentResponse(const PutRawMessageContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRawMessageContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRawMessageContentResponse)
    Q_DISABLE_COPY(PutRawMessageContentResponse)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
