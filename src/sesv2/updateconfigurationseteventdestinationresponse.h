// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H

#include "sesv2response.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateConfigurationSetEventDestinationResponsePrivate;

class QTAWSSESV2_EXPORT UpdateConfigurationSetEventDestinationResponse : public SESv2Response {
    Q_OBJECT

public:
    UpdateConfigurationSetEventDestinationResponse(const UpdateConfigurationSetEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetEventDestinationResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
