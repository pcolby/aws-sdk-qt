// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEDAPPLICATIONSRESPONSE_H
#define QTAWS_LISTENTITLEDAPPLICATIONSRESPONSE_H

#include "appstreamresponse.h"
#include "listentitledapplicationsrequest.h"

namespace QtAws {
namespace AppStream {

class ListEntitledApplicationsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT ListEntitledApplicationsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    ListEntitledApplicationsResponse(const ListEntitledApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntitledApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitledApplicationsResponse)
    Q_DISABLE_COPY(ListEntitledApplicationsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
