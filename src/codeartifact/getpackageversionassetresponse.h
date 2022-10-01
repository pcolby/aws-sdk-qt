// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONASSETRESPONSE_H
#define QTAWS_GETPACKAGEVERSIONASSETRESPONSE_H

#include "codeartifactresponse.h"
#include "getpackageversionassetrequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionAssetResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT GetPackageVersionAssetResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    GetPackageVersionAssetResponse(const GetPackageVersionAssetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPackageVersionAssetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionAssetResponse)
    Q_DISABLE_COPY(GetPackageVersionAssetResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
