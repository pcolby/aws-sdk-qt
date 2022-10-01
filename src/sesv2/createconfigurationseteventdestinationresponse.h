// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H
#define QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H

#include "sesv2response.h"
#include "createconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateConfigurationSetEventDestinationResponsePrivate;

class QTAWSSESV2_EXPORT CreateConfigurationSetEventDestinationResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateConfigurationSetEventDestinationResponse(const CreateConfigurationSetEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigurationSetEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(CreateConfigurationSetEventDestinationResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
