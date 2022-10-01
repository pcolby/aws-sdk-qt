// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEATTRIBUTERESPONSE_H
#define QTAWS_UPDATEINSTANCEATTRIBUTERESPONSE_H

#include "connectresponse.h"
#include "updateinstanceattributerequest.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceAttributeResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateInstanceAttributeResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateInstanceAttributeResponse(const UpdateInstanceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInstanceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceAttributeResponse)
    Q_DISABLE_COPY(UpdateInstanceAttributeResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
