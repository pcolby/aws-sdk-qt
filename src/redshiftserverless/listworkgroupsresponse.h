// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSRESPONSE_H
#define QTAWS_LISTWORKGROUPSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "listworkgroupsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListWorkgroupsResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListWorkgroupsResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ListWorkgroupsResponse(const ListWorkgroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkgroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkgroupsResponse)
    Q_DISABLE_COPY(ListWorkgroupsResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
