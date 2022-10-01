// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENTRYRESPONSE_H
#define QTAWS_UPDATEDOMAINENTRYRESPONSE_H

#include "lightsailresponse.h"
#include "updatedomainentryrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateDomainEntryResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateDomainEntryResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateDomainEntryResponse(const UpdateDomainEntryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDomainEntryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainEntryResponse)
    Q_DISABLE_COPY(UpdateDomainEntryResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
