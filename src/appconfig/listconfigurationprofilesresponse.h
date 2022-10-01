// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONPROFILESRESPONSE_H
#define QTAWS_LISTCONFIGURATIONPROFILESRESPONSE_H

#include "appconfigresponse.h"
#include "listconfigurationprofilesrequest.h"

namespace QtAws {
namespace AppConfig {

class ListConfigurationProfilesResponsePrivate;

class QTAWSAPPCONFIG_EXPORT ListConfigurationProfilesResponse : public AppConfigResponse {
    Q_OBJECT

public:
    ListConfigurationProfilesResponse(const ListConfigurationProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigurationProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationProfilesResponse)
    Q_DISABLE_COPY(ListConfigurationProfilesResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
