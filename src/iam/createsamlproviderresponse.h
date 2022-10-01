// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMLPROVIDERRESPONSE_H
#define QTAWS_CREATESAMLPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "createsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class CreateSAMLProviderResponsePrivate;

class QTAWSIAM_EXPORT CreateSAMLProviderResponse : public IamResponse {
    Q_OBJECT

public:
    CreateSAMLProviderResponse(const CreateSAMLProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSAMLProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSAMLProviderResponse)
    Q_DISABLE_COPY(CreateSAMLProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
