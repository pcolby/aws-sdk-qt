// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETENDPOINTATTRIBUTESRESPONSE_H
#define QTAWS_SETENDPOINTATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "setendpointattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetEndpointAttributesResponsePrivate;

class QTAWSSNS_EXPORT SetEndpointAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    SetEndpointAttributesResponse(const SetEndpointAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetEndpointAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetEndpointAttributesResponse)
    Q_DISABLE_COPY(SetEndpointAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
