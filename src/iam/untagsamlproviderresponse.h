// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSAMLPROVIDERRESPONSE_H
#define QTAWS_UNTAGSAMLPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "untagsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class UntagSAMLProviderResponsePrivate;

class QTAWSIAM_EXPORT UntagSAMLProviderResponse : public IamResponse {
    Q_OBJECT

public:
    UntagSAMLProviderResponse(const UntagSAMLProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagSAMLProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagSAMLProviderResponse)
    Q_DISABLE_COPY(UntagSAMLProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
