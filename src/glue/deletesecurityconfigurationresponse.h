// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_H
#define QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_H

#include "glueresponse.h"
#include "deletesecurityconfigurationrequest.h"

namespace QtAws {
namespace Glue {

class DeleteSecurityConfigurationResponsePrivate;

class QTAWSGLUE_EXPORT DeleteSecurityConfigurationResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteSecurityConfigurationResponse(const DeleteSecurityConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSecurityConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityConfigurationResponse)
    Q_DISABLE_COPY(DeleteSecurityConfigurationResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
