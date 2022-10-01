// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSRESPONSE_H
#define QTAWS_LISTEXTENSIONSRESPONSE_H

#include "appconfigresponse.h"
#include "listextensionsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionsResponsePrivate;

class QTAWSAPPCONFIG_EXPORT ListExtensionsResponse : public AppConfigResponse {
    Q_OBJECT

public:
    ListExtensionsResponse(const ListExtensionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExtensionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionsResponse)
    Q_DISABLE_COPY(ListExtensionsResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
