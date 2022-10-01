// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMLPROVIDERRESPONSE_H
#define QTAWS_GETSAMLPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "getsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class GetSAMLProviderResponsePrivate;

class QTAWSIAM_EXPORT GetSAMLProviderResponse : public IamResponse {
    Q_OBJECT

public:
    GetSAMLProviderResponse(const GetSAMLProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSAMLProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSAMLProviderResponse)
    Q_DISABLE_COPY(GetSAMLProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
