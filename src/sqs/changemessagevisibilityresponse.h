// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYRESPONSE_H
#define QTAWS_CHANGEMESSAGEVISIBILITYRESPONSE_H

#include "sqsresponse.h"
#include "changemessagevisibilityrequest.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityResponsePrivate;

class QTAWSSQS_EXPORT ChangeMessageVisibilityResponse : public SqsResponse {
    Q_OBJECT

public:
    ChangeMessageVisibilityResponse(const ChangeMessageVisibilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChangeMessageVisibilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeMessageVisibilityResponse)
    Q_DISABLE_COPY(ChangeMessageVisibilityResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
