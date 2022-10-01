// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSRESPONSE_H
#define QTAWS_LISTDEDICATEDIPPOOLSRESPONSE_H

#include "sesv2response.h"
#include "listdedicatedippoolsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListDedicatedIpPoolsResponsePrivate;

class QTAWSSESV2_EXPORT ListDedicatedIpPoolsResponse : public SESv2Response {
    Q_OBJECT

public:
    ListDedicatedIpPoolsResponse(const ListDedicatedIpPoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDedicatedIpPoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDedicatedIpPoolsResponse)
    Q_DISABLE_COPY(ListDedicatedIpPoolsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
