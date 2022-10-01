// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYBATCHRESPONSE_H
#define QTAWS_CHANGEMESSAGEVISIBILITYBATCHRESPONSE_H

#include "sqsresponse.h"
#include "changemessagevisibilitybatchrequest.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityBatchResponsePrivate;

class QTAWSSQS_EXPORT ChangeMessageVisibilityBatchResponse : public SqsResponse {
    Q_OBJECT

public:
    ChangeMessageVisibilityBatchResponse(const ChangeMessageVisibilityBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChangeMessageVisibilityBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeMessageVisibilityBatchResponse)
    Q_DISABLE_COPY(ChangeMessageVisibilityBatchResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
