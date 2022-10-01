// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H

#include "sesresponse.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetEventDestinationResponsePrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetEventDestinationResponse : public SesResponse {
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

} // namespace Ses
} // namespace QtAws

#endif
