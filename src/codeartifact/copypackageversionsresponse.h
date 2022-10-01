// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPACKAGEVERSIONSRESPONSE_H
#define QTAWS_COPYPACKAGEVERSIONSRESPONSE_H

#include "codeartifactresponse.h"
#include "copypackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class CopyPackageVersionsResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT CopyPackageVersionsResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    CopyPackageVersionsResponse(const CopyPackageVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyPackageVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyPackageVersionsResponse)
    Q_DISABLE_COPY(CopyPackageVersionsResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
