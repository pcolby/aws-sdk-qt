// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVERESPONSE_H
#define QTAWS_DELETEARCHIVERESPONSE_H

#include "eventbridgeresponse.h"
#include "deletearchiverequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteArchiveResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DeleteArchiveResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DeleteArchiveResponse(const DeleteArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteArchiveResponse)
    Q_DISABLE_COPY(DeleteArchiveResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
