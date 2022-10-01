// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPVERSIONSRESPONSE_H
#define QTAWS_LISTGROUPVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listgroupversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListGroupVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListGroupVersionsResponse(const ListGroupVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupVersionsResponse)
    Q_DISABLE_COPY(ListGroupVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
