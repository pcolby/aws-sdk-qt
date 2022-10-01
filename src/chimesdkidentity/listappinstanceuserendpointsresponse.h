// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERENDPOINTSRESPONSE_H
#define QTAWS_LISTAPPINSTANCEUSERENDPOINTSRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "listappinstanceuserendpointsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUserEndpointsResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstanceUserEndpointsResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    ListAppInstanceUserEndpointsResponse(const ListAppInstanceUserEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppInstanceUserEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceUserEndpointsResponse)
    Q_DISABLE_COPY(ListAppInstanceUserEndpointsResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
