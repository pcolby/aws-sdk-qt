// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHPRINCIPALPOLICYRESPONSE_H
#define QTAWS_DETACHPRINCIPALPOLICYRESPONSE_H

#include "iotresponse.h"
#include "detachprincipalpolicyrequest.h"

namespace QtAws {
namespace IoT {

class DetachPrincipalPolicyResponsePrivate;

class QTAWSIOT_EXPORT DetachPrincipalPolicyResponse : public IoTResponse {
    Q_OBJECT

public:
    DetachPrincipalPolicyResponse(const DetachPrincipalPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachPrincipalPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachPrincipalPolicyResponse)
    Q_DISABLE_COPY(DetachPrincipalPolicyResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
