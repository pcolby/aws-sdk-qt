// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTRESPONSE_H
#define QTAWS_STOPCONTACTRESPONSE_H

#include "connectresponse.h"
#include "stopcontactrequest.h"

namespace QtAws {
namespace Connect {

class StopContactResponsePrivate;

class QTAWSCONNECT_EXPORT StopContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    StopContactResponse(const StopContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContactResponse)
    Q_DISABLE_COPY(StopContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
