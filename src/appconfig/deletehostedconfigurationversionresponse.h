// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONRESPONSE_H
#define QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONRESPONSE_H

#include "appconfigresponse.h"
#include "deletehostedconfigurationversionrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteHostedConfigurationVersionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT DeleteHostedConfigurationVersionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    DeleteHostedConfigurationVersionResponse(const DeleteHostedConfigurationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHostedConfigurationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostedConfigurationVersionResponse)
    Q_DISABLE_COPY(DeleteHostedConfigurationVersionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
