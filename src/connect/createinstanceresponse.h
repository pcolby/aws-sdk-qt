// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCERESPONSE_H
#define QTAWS_CREATEINSTANCERESPONSE_H

#include "connectresponse.h"
#include "createinstancerequest.h"

namespace QtAws {
namespace Connect {

class CreateInstanceResponsePrivate;

class QTAWSCONNECT_EXPORT CreateInstanceResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateInstanceResponse(const CreateInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceResponse)
    Q_DISABLE_COPY(CreateInstanceResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
