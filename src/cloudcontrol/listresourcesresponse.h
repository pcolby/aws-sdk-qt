// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESRESPONSE_H
#define QTAWS_LISTRESOURCESRESPONSE_H

#include "cloudcontrolresponse.h"
#include "listresourcesrequest.h"

namespace QtAws {
namespace CloudControl {

class ListResourcesResponsePrivate;

class QTAWSCLOUDCONTROL_EXPORT ListResourcesResponse : public CloudControlResponse {
    Q_OBJECT

public:
    ListResourcesResponse(const ListResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesResponse)
    Q_DISABLE_COPY(ListResourcesResponse)

};

} // namespace CloudControl
} // namespace QtAws

#endif
