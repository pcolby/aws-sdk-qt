// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTATTRIBUTESRESPONSE_H
#define QTAWS_GETENDPOINTATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "getendpointattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetEndpointAttributesResponsePrivate;

class QTAWSSNS_EXPORT GetEndpointAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    GetEndpointAttributesResponse(const GetEndpointAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEndpointAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointAttributesResponse)
    Q_DISABLE_COPY(GetEndpointAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
