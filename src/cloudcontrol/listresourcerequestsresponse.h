// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEREQUESTSRESPONSE_H
#define QTAWS_LISTRESOURCEREQUESTSRESPONSE_H

#include "cloudcontrolresponse.h"
#include "listresourcerequestsrequest.h"

namespace QtAws {
namespace CloudControl {

class ListResourceRequestsResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT ListResourceRequestsResponse : public CloudControlResponse {
    Q_OBJECT

public:
    ListResourceRequestsResponse(const ListResourceRequestsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceRequestsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceRequestsResponse)
    Q_DISABLE_COPY(ListResourceRequestsResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
