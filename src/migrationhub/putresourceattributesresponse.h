// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEATTRIBUTESRESPONSE_H
#define QTAWS_PUTRESOURCEATTRIBUTESRESPONSE_H

#include "migrationhubresponse.h"
#include "putresourceattributesrequest.h"

namespace QtAws {
namespace MigrationHub {

class PutResourceAttributesResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT PutResourceAttributesResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    PutResourceAttributesResponse(const PutResourceAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutResourceAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourceAttributesResponse)
    Q_DISABLE_COPY(PutResourceAttributesResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
