// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWCONTENTRESPONSE_H
#define QTAWS_UPDATECONTACTFLOWCONTENTRESPONSE_H

#include "connectresponse.h"
#include "updatecontactflowcontentrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowContentResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowContentResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactFlowContentResponse(const UpdateContactFlowContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactFlowContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowContentResponse)
    Q_DISABLE_COPY(UpdateContactFlowContentResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
