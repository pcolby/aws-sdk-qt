// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYCONFIGURATIONRESPONSE_H
#define QTAWS_CREATESECURITYCONFIGURATIONRESPONSE_H

#include "glueresponse.h"
#include "createsecurityconfigurationrequest.h"

namespace QtAws {
namespace Glue {

class CreateSecurityConfigurationResponsePrivate;

class QTAWSGLUE_EXPORT CreateSecurityConfigurationResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateSecurityConfigurationResponse(const CreateSecurityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSecurityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityConfigurationResponse)
    Q_DISABLE_COPY(CreateSecurityConfigurationResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
