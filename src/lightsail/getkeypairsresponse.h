// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRSRESPONSE_H
#define QTAWS_GETKEYPAIRSRESPONSE_H

#include "lightsailresponse.h"
#include "getkeypairsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetKeyPairsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetKeyPairsResponse(const GetKeyPairsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyPairsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyPairsResponse)
    Q_DISABLE_COPY(GetKeyPairsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
