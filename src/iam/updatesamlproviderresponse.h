// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMLPROVIDERRESPONSE_H
#define QTAWS_UPDATESAMLPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "updatesamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSAMLProviderResponsePrivate;

class QTAWSIAM_EXPORT UpdateSAMLProviderResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateSAMLProviderResponse(const UpdateSAMLProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSAMLProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSAMLProviderResponse)
    Q_DISABLE_COPY(UpdateSAMLProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
