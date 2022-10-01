// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_H

#include "ssoadminresponse.h"
#include "updateinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class UpdateInstanceAccessControlAttributeConfigurationResponsePrivate;

class QTAWSSSOADMIN_EXPORT UpdateInstanceAccessControlAttributeConfigurationResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    UpdateInstanceAccessControlAttributeConfigurationResponse(const UpdateInstanceAccessControlAttributeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInstanceAccessControlAttributeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(UpdateInstanceAccessControlAttributeConfigurationResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
