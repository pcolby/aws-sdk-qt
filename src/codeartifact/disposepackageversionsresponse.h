// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISPOSEPACKAGEVERSIONSRESPONSE_H
#define QTAWS_DISPOSEPACKAGEVERSIONSRESPONSE_H

#include "codeartifactresponse.h"
#include "disposepackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DisposePackageVersionsResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DisposePackageVersionsResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DisposePackageVersionsResponse(const DisposePackageVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisposePackageVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisposePackageVersionsResponse)
    Q_DISABLE_COPY(DisposePackageVersionsResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
