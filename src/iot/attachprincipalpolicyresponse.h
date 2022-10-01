// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPRINCIPALPOLICYRESPONSE_H
#define QTAWS_ATTACHPRINCIPALPOLICYRESPONSE_H

#include "iotresponse.h"
#include "attachprincipalpolicyrequest.h"

namespace QtAws {
namespace IoT {

class AttachPrincipalPolicyResponsePrivate;

class QTAWSIOT_EXPORT AttachPrincipalPolicyResponse : public IoTResponse {
    Q_OBJECT

public:
    AttachPrincipalPolicyResponse(const AttachPrincipalPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachPrincipalPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPrincipalPolicyResponse)
    Q_DISABLE_COPY(AttachPrincipalPolicyResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
