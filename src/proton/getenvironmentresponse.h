// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTRESPONSE_H
#define QTAWS_GETENVIRONMENTRESPONSE_H

#include "protonresponse.h"
#include "getenvironmentrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentResponsePrivate;

class QTAWSPROTON_EXPORT GetEnvironmentResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetEnvironmentResponse(const GetEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentResponse)
    Q_DISABLE_COPY(GetEnvironmentResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
