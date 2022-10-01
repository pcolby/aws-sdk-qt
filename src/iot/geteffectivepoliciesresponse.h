// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPOLICIESRESPONSE_H
#define QTAWS_GETEFFECTIVEPOLICIESRESPONSE_H

#include "iotresponse.h"
#include "geteffectivepoliciesrequest.h"

namespace QtAws {
namespace IoT {

class GetEffectivePoliciesResponsePrivate;

class QTAWSIOT_EXPORT GetEffectivePoliciesResponse : public IoTResponse {
    Q_OBJECT

public:
    GetEffectivePoliciesResponse(const GetEffectivePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEffectivePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEffectivePoliciesResponse)
    Q_DISABLE_COPY(GetEffectivePoliciesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
