// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYWORKERSRESPONSE_H
#define QTAWS_NOTIFYWORKERSRESPONSE_H

#include "mturkresponse.h"
#include "notifyworkersrequest.h"

namespace QtAws {
namespace MTurk {

class NotifyWorkersResponsePrivate;

class QTAWSMTURK_EXPORT NotifyWorkersResponse : public MTurkResponse {
    Q_OBJECT

public:
    NotifyWorkersResponse(const NotifyWorkersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyWorkersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyWorkersResponse)
    Q_DISABLE_COPY(NotifyWorkersResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
