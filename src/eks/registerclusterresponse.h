// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLUSTERRESPONSE_H
#define QTAWS_REGISTERCLUSTERRESPONSE_H

#include "eksresponse.h"
#include "registerclusterrequest.h"

namespace QtAws {
namespace Eks {

class RegisterClusterResponsePrivate;

class QTAWSEKS_EXPORT RegisterClusterResponse : public EksResponse {
    Q_OBJECT

public:
    RegisterClusterResponse(const RegisterClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterClusterResponse)
    Q_DISABLE_COPY(RegisterClusterResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
