// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGERESPONSE_H
#define QTAWS_DELETEMESSAGERESPONSE_H

#include "ivschatresponse.h"
#include "deletemessagerequest.h"

namespace QtAws {
namespace IvsChat {

class DeleteMessageResponsePrivate;

class QTAWSIVSCHAT_EXPORT DeleteMessageResponse : public IvsChatResponse {
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

} // namespace IvsChat
} // namespace QtAws

#endif
