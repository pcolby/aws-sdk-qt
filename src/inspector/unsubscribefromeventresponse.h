// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMEVENTRESPONSE_H
#define QTAWS_UNSUBSCRIBEFROMEVENTRESPONSE_H

#include "inspectorresponse.h"
#include "unsubscribefromeventrequest.h"

namespace QtAws {
namespace Inspector {

class UnsubscribeFromEventResponsePrivate;

class QTAWSINSPECTOR_EXPORT UnsubscribeFromEventResponse : public InspectorResponse {
    Q_OBJECT

public:
    UnsubscribeFromEventResponse(const UnsubscribeFromEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnsubscribeFromEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnsubscribeFromEventResponse)
    Q_DISABLE_COPY(UnsubscribeFromEventResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
