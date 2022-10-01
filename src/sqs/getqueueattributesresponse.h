// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEATTRIBUTESRESPONSE_H
#define QTAWS_GETQUEUEATTRIBUTESRESPONSE_H

#include "sqsresponse.h"
#include "getqueueattributesrequest.h"

namespace QtAws {
namespace Sqs {

class GetQueueAttributesResponsePrivate;

class QTAWSSQS_EXPORT GetQueueAttributesResponse : public SqsResponse {
    Q_OBJECT

public:
    GetQueueAttributesResponse(const GetQueueAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueueAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueueAttributesResponse)
    Q_DISABLE_COPY(GetQueueAttributesResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
