// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETRESPONSE_H
#define QTAWS_DELETECONFIGURATIONSETRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deleteconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteConfigurationSetResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteConfigurationSetResponse : public PinpointSmsVoiceV2Response {
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

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
