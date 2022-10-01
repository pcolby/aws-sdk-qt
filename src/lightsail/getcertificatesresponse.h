// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATESRESPONSE_H
#define QTAWS_GETCERTIFICATESRESPONSE_H

#include "lightsailresponse.h"
#include "getcertificatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetCertificatesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetCertificatesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetCertificatesResponse(const GetCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCertificatesResponse)
    Q_DISABLE_COPY(GetCertificatesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
