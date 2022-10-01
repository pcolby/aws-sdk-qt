// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILESDKRELEASESRESPONSE_H
#define QTAWS_LISTMOBILESDKRELEASESRESPONSE_H

#include "wafv2response.h"
#include "listmobilesdkreleasesrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListMobileSdkReleasesResponsePrivate;

class QTAWSWAFV2_EXPORT ListMobileSdkReleasesResponse : public Wafv2Response {
    Q_OBJECT

public:
    ListMobileSdkReleasesResponse(const ListMobileSdkReleasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMobileSdkReleasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMobileSdkReleasesResponse)
    Q_DISABLE_COPY(ListMobileSdkReleasesResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
