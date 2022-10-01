// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESRESPONSE_H
#define QTAWS_REMOVEATTRIBUTESRESPONSE_H

#include "pinpointresponse.h"
#include "removeattributesrequest.h"

namespace QtAws {
namespace Pinpoint {

class RemoveAttributesResponsePrivate;

class QTAWSPINPOINT_EXPORT RemoveAttributesResponse : public PinpointResponse {
    Q_OBJECT

public:
    RemoveAttributesResponse(const RemoveAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAttributesResponse)
    Q_DISABLE_COPY(RemoveAttributesResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
