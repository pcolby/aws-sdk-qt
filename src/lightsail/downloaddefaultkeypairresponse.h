// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDEFAULTKEYPAIRRESPONSE_H
#define QTAWS_DOWNLOADDEFAULTKEYPAIRRESPONSE_H

#include "lightsailresponse.h"
#include "downloaddefaultkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class DownloadDefaultKeyPairResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DownloadDefaultKeyPairResponse : public LightsailResponse {
    Q_OBJECT

public:
    DownloadDefaultKeyPairResponse(const DownloadDefaultKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DownloadDefaultKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DownloadDefaultKeyPairResponse)
    Q_DISABLE_COPY(DownloadDefaultKeyPairResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
