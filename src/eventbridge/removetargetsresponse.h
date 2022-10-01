// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETARGETSRESPONSE_H
#define QTAWS_REMOVETARGETSRESPONSE_H

#include "eventbridgeresponse.h"
#include "removetargetsrequest.h"

namespace QtAws {
namespace EventBridge {

class RemoveTargetsResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT RemoveTargetsResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    RemoveTargetsResponse(const RemoveTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTargetsResponse)
    Q_DISABLE_COPY(RemoveTargetsResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
