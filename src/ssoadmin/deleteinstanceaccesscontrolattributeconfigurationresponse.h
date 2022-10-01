// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_H
#define QTAWS_DELETEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONRESPONSE_H

#include "ssoadminresponse.h"
#include "deleteinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInstanceAccessControlAttributeConfigurationResponsePrivate;

class QTAWSSSOADMIN_EXPORT DeleteInstanceAccessControlAttributeConfigurationResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DeleteInstanceAccessControlAttributeConfigurationResponse(const DeleteInstanceAccessControlAttributeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInstanceAccessControlAttributeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceAccessControlAttributeConfigurationResponse)
    Q_DISABLE_COPY(DeleteInstanceAccessControlAttributeConfigurationResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
