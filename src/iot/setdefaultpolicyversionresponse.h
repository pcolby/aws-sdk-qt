// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTPOLICYVERSIONRESPONSE_H
#define QTAWS_SETDEFAULTPOLICYVERSIONRESPONSE_H

#include "iotresponse.h"
#include "setdefaultpolicyversionrequest.h"

namespace QtAws {
namespace IoT {

class SetDefaultPolicyVersionResponsePrivate;

class QTAWSIOT_EXPORT SetDefaultPolicyVersionResponse : public IoTResponse {
    Q_OBJECT

public:
    SetDefaultPolicyVersionResponse(const SetDefaultPolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDefaultPolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultPolicyVersionResponse)
    Q_DISABLE_COPY(SetDefaultPolicyVersionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
