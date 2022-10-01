// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMAPPLICATIONSRESPONSE_H
#define QTAWS_LISTPLATFORMAPPLICATIONSRESPONSE_H

#include "snsresponse.h"
#include "listplatformapplicationsrequest.h"

namespace QtAws {
namespace Sns {

class ListPlatformApplicationsResponsePrivate;

class QTAWSSNS_EXPORT ListPlatformApplicationsResponse : public SnsResponse {
    Q_OBJECT

public:
    ListPlatformApplicationsResponse(const ListPlatformApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlatformApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlatformApplicationsResponse)
    Q_DISABLE_COPY(ListPlatformApplicationsResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
