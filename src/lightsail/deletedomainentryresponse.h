// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINENTRYRESPONSE_H
#define QTAWS_DELETEDOMAINENTRYRESPONSE_H

#include "lightsailresponse.h"
#include "deletedomainentryrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDomainEntryResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteDomainEntryResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteDomainEntryResponse(const DeleteDomainEntryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDomainEntryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainEntryResponse)
    Q_DISABLE_COPY(DeleteDomainEntryResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
