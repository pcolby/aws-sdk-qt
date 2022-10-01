// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINSTANCERESPONSE_H
#define QTAWS_UPDATESERVICEINSTANCERESPONSE_H

#include "protonresponse.h"
#include "updateserviceinstancerequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceInstanceResponsePrivate;

class QTAWSPROTON_EXPORT UpdateServiceInstanceResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateServiceInstanceResponse(const UpdateServiceInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceInstanceResponse)
    Q_DISABLE_COPY(UpdateServiceInstanceResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
