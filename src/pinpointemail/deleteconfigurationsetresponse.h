// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETRESPONSE_H
#define QTAWS_DELETECONFIGURATIONSETRESPONSE_H

#include "pinpointemailresponse.h"
#include "deleteconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteConfigurationSetResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT DeleteConfigurationSetResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    DeleteConfigurationSetResponse(const DeleteConfigurationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationSetResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
