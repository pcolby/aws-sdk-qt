// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATESRESPONSE_H
#define QTAWS_LISTTEMPLATESRESPONSE_H

#include "pinpointresponse.h"
#include "listtemplatesrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListTemplatesResponsePrivate;

class QTAWSPINPOINT_EXPORT ListTemplatesResponse : public PinpointResponse {
    Q_OBJECT

public:
    ListTemplatesResponse(const ListTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplatesResponse)
    Q_DISABLE_COPY(ListTemplatesResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
