// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKKEYPAIRRESPONSE_H
#define QTAWS_GETPLAYBACKKEYPAIRRESPONSE_H

#include "ivsresponse.h"
#include "getplaybackkeypairrequest.h"

namespace QtAws {
namespace Ivs {

class GetPlaybackKeyPairResponsePrivate;

class QTAWSIVS_EXPORT GetPlaybackKeyPairResponse : public IvsResponse {
    Q_OBJECT

public:
    GetPlaybackKeyPairResponse(const GetPlaybackKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPlaybackKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlaybackKeyPairResponse)
    Q_DISABLE_COPY(GetPlaybackKeyPairResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
