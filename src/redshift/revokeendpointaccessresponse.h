// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEENDPOINTACCESSRESPONSE_H
#define QTAWS_REVOKEENDPOINTACCESSRESPONSE_H

#include "redshiftresponse.h"
#include "revokeendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class RevokeEndpointAccessResponsePrivate;

class QTAWSREDSHIFT_EXPORT RevokeEndpointAccessResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RevokeEndpointAccessResponse(const RevokeEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeEndpointAccessResponse)
    Q_DISABLE_COPY(RevokeEndpointAccessResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
