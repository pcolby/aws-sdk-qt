// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMLPROVIDERRESPONSE_H
#define QTAWS_DELETESAMLPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "deletesamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSAMLProviderResponsePrivate;

class QTAWSIAM_EXPORT DeleteSAMLProviderResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteSAMLProviderResponse(const DeleteSAMLProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSAMLProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSAMLProviderResponse)
    Q_DISABLE_COPY(DeleteSAMLProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
