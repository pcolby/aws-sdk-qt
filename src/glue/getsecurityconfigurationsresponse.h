// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECURITYCONFIGURATIONSRESPONSE_H
#define QTAWS_GETSECURITYCONFIGURATIONSRESPONSE_H

#include "glueresponse.h"
#include "getsecurityconfigurationsrequest.h"

namespace QtAws {
namespace Glue {

class GetSecurityConfigurationsResponsePrivate;

class QTAWSGLUE_EXPORT GetSecurityConfigurationsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetSecurityConfigurationsResponse(const GetSecurityConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSecurityConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSecurityConfigurationsResponse)
    Q_DISABLE_COPY(GetSecurityConfigurationsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
