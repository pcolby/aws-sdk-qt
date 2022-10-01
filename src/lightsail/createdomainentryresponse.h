// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINENTRYRESPONSE_H
#define QTAWS_CREATEDOMAINENTRYRESPONSE_H

#include "lightsailresponse.h"
#include "createdomainentryrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateDomainEntryResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateDomainEntryResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateDomainEntryResponse(const CreateDomainEntryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDomainEntryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainEntryResponse)
    Q_DISABLE_COPY(CreateDomainEntryResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
