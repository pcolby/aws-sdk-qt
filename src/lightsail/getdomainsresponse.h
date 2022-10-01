// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSRESPONSE_H
#define QTAWS_GETDOMAINSRESPONSE_H

#include "lightsailresponse.h"
#include "getdomainsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDomainsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDomainsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDomainsResponse(const GetDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainsResponse)
    Q_DISABLE_COPY(GetDomainsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
