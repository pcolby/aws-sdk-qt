// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONASSOCIATIONSRESPONSE_H
#define QTAWS_LISTEXTENSIONASSOCIATIONSRESPONSE_H

#include "appconfigresponse.h"
#include "listextensionassociationsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionAssociationsResponsePrivate;

class QTAWSAPPCONFIG_EXPORT ListExtensionAssociationsResponse : public AppConfigResponse {
    Q_OBJECT

public:
    ListExtensionAssociationsResponse(const ListExtensionAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExtensionAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionAssociationsResponse)
    Q_DISABLE_COPY(ListExtensionAssociationsResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
