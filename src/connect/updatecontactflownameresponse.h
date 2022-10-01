// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWNAMERESPONSE_H
#define QTAWS_UPDATECONTACTFLOWNAMERESPONSE_H

#include "connectresponse.h"
#include "updatecontactflownamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowNameResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowNameResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactFlowNameResponse(const UpdateContactFlowNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactFlowNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowNameResponse)
    Q_DISABLE_COPY(UpdateContactFlowNameResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
