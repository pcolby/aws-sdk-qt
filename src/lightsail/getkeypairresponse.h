// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRRESPONSE_H
#define QTAWS_GETKEYPAIRRESPONSE_H

#include "lightsailresponse.h"
#include "getkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetKeyPairResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetKeyPairResponse(const GetKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyPairResponse)
    Q_DISABLE_COPY(GetKeyPairResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
