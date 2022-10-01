// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_H

#include "ampresponse.h"
#include "deleteloggingconfigurationrequest.h"

namespace QtAws {
namespace Amp {

class DeleteLoggingConfigurationResponsePrivate;

class QTAWSAMP_EXPORT DeleteLoggingConfigurationResponse : public AmpResponse {
    Q_OBJECT

public:
    DeleteLoggingConfigurationResponse(const DeleteLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoggingConfigurationResponse)
    Q_DISABLE_COPY(DeleteLoggingConfigurationResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
