// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETQUEUEATTRIBUTESRESPONSE_H
#define QTAWS_SETQUEUEATTRIBUTESRESPONSE_H

#include "sqsresponse.h"
#include "setqueueattributesrequest.h"

namespace QtAws {
namespace Sqs {

class SetQueueAttributesResponsePrivate;

class QTAWSSQS_EXPORT SetQueueAttributesResponse : public SqsResponse {
    Q_OBJECT

public:
    SetQueueAttributesResponse(const SetQueueAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetQueueAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetQueueAttributesResponse)
    Q_DISABLE_COPY(SetQueueAttributesResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
