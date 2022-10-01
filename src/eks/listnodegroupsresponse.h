// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEGROUPSRESPONSE_H
#define QTAWS_LISTNODEGROUPSRESPONSE_H

#include "eksresponse.h"
#include "listnodegroupsrequest.h"

namespace QtAws {
namespace Eks {

class ListNodegroupsResponsePrivate;

class QTAWSEKS_EXPORT ListNodegroupsResponse : public EksResponse {
    Q_OBJECT

public:
    ListNodegroupsResponse(const ListNodegroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNodegroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNodegroupsResponse)
    Q_DISABLE_COPY(ListNodegroupsResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
