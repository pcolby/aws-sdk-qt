// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECURITYCONFIGURATIONRESPONSE_H
#define QTAWS_GETSECURITYCONFIGURATIONRESPONSE_H

#include "glueresponse.h"
#include "getsecurityconfigurationrequest.h"

namespace QtAws {
namespace Glue {

class GetSecurityConfigurationResponsePrivate;

class QTAWSGLUE_EXPORT GetSecurityConfigurationResponse : public GlueResponse {
    Q_OBJECT

public:
    GetSecurityConfigurationResponse(const GetSecurityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSecurityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSecurityConfigurationResponse)
    Q_DISABLE_COPY(GetSecurityConfigurationResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
