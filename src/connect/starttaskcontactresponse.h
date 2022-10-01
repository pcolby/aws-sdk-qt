// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKCONTACTRESPONSE_H
#define QTAWS_STARTTASKCONTACTRESPONSE_H

#include "connectresponse.h"
#include "starttaskcontactrequest.h"

namespace QtAws {
namespace Connect {

class StartTaskContactResponsePrivate;

class QTAWSCONNECT_EXPORT StartTaskContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    StartTaskContactResponse(const StartTaskContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTaskContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTaskContactResponse)
    Q_DISABLE_COPY(StartTaskContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
