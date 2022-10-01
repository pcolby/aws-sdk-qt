// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDPOLICIESRESPONSE_H
#define QTAWS_LISTATTACHEDPOLICIESRESPONSE_H

#include "iotresponse.h"
#include "listattachedpoliciesrequest.h"

namespace QtAws {
namespace IoT {

class ListAttachedPoliciesResponsePrivate;

class QTAWSIOT_EXPORT ListAttachedPoliciesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAttachedPoliciesResponse(const ListAttachedPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttachedPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedPoliciesResponse)
    Q_DISABLE_COPY(ListAttachedPoliciesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
