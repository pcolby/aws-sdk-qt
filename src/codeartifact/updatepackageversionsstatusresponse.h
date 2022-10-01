// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGEVERSIONSSTATUSRESPONSE_H
#define QTAWS_UPDATEPACKAGEVERSIONSSTATUSRESPONSE_H

#include "codeartifactresponse.h"
#include "updatepackageversionsstatusrequest.h"

namespace QtAws {
namespace CodeArtifact {

class UpdatePackageVersionsStatusResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT UpdatePackageVersionsStatusResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    UpdatePackageVersionsStatusResponse(const UpdatePackageVersionsStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePackageVersionsStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePackageVersionsStatusResponse)
    Q_DISABLE_COPY(UpdatePackageVersionsStatusResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
