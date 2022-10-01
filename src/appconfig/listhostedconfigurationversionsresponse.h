// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDCONFIGURATIONVERSIONSRESPONSE_H
#define QTAWS_LISTHOSTEDCONFIGURATIONVERSIONSRESPONSE_H

#include "appconfigresponse.h"
#include "listhostedconfigurationversionsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListHostedConfigurationVersionsResponsePrivate;

class QTAWSAPPCONFIG_EXPORT ListHostedConfigurationVersionsResponse : public AppConfigResponse {
    Q_OBJECT

public:
    ListHostedConfigurationVersionsResponse(const ListHostedConfigurationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHostedConfigurationVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedConfigurationVersionsResponse)
    Q_DISABLE_COPY(ListHostedConfigurationVersionsResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
