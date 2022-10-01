// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERESPONSE_H
#define QTAWS_UPDATEARCHIVERESPONSE_H

#include "eventbridgeresponse.h"
#include "updatearchiverequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateArchiveResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT UpdateArchiveResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    UpdateArchiveResponse(const UpdateArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArchiveResponse)
    Q_DISABLE_COPY(UpdateArchiveResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
