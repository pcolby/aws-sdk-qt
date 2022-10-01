// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOOLORIGINATIONIDENTITIESRESPONSE_H
#define QTAWS_LISTPOOLORIGINATIONIDENTITIESRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "listpooloriginationidentitiesrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class ListPoolOriginationIdentitiesResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT ListPoolOriginationIdentitiesResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    ListPoolOriginationIdentitiesResponse(const ListPoolOriginationIdentitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPoolOriginationIdentitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoolOriginationIdentitiesResponse)
    Q_DISABLE_COPY(ListPoolOriginationIdentitiesResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
