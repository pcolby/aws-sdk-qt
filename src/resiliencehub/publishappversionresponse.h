// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHAPPVERSIONRESPONSE_H
#define QTAWS_PUBLISHAPPVERSIONRESPONSE_H

#include "resiliencehubresponse.h"
#include "publishappversionrequest.h"

namespace QtAws {
namespace ResilienceHub {

class PublishAppVersionResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT PublishAppVersionResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    PublishAppVersionResponse(const PublishAppVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishAppVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishAppVersionResponse)
    Q_DISABLE_COPY(PublishAppVersionResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
