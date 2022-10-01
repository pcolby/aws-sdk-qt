// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H

#include "sesv2response.h"
#include "deleteconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteConfigurationSetEventDestinationResponsePrivate;

class QTAWSSESV2_EXPORT DeleteConfigurationSetEventDestinationResponse : public SESv2Response {
    Q_OBJECT

public:
    DeleteConfigurationSetEventDestinationResponse(const DeleteConfigurationSetEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationSetEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetEventDestinationResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
