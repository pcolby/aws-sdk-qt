// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICERESPONSE_H
#define QTAWS_UPDATESERVICERESPONSE_H

#include "protonresponse.h"
#include "updateservicerequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceResponsePrivate;

class QTAWSPROTON_EXPORT UpdateServiceResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateServiceResponse(const UpdateServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceResponse)
    Q_DISABLE_COPY(UpdateServiceResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
