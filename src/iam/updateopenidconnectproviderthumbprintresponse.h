// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTRESPONSE_H
#define QTAWS_UPDATEOPENIDCONNECTPROVIDERTHUMBPRINTRESPONSE_H

#include "iamresponse.h"
#include "updateopenidconnectproviderthumbprintrequest.h"

namespace QtAws {
namespace Iam {

class UpdateOpenIDConnectProviderThumbprintResponsePrivate;

class QTAWSIAM_EXPORT UpdateOpenIDConnectProviderThumbprintResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateOpenIDConnectProviderThumbprintResponse(const UpdateOpenIDConnectProviderThumbprintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOpenIDConnectProviderThumbprintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOpenIDConnectProviderThumbprintResponse)
    Q_DISABLE_COPY(UpdateOpenIDConnectProviderThumbprintResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
