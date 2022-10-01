// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINRESPONSE_H
#define QTAWS_GETDOMAINRESPONSE_H

#include "lightsailresponse.h"
#include "getdomainrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDomainResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDomainResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDomainResponse(const GetDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainResponse)
    Q_DISABLE_COPY(GetDomainResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
