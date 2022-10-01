// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGERESPONSE_H
#define QTAWS_DELETEMESSAGERESPONSE_H

#include "sqsresponse.h"
#include "deletemessagerequest.h"

namespace QtAws {
namespace Sqs {

class DeleteMessageResponsePrivate;

class QTAWSSQS_EXPORT DeleteMessageResponse : public SqsResponse {
    Q_OBJECT

public:
    DeleteMessageResponse(const DeleteMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMessageResponse)
    Q_DISABLE_COPY(DeleteMessageResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
