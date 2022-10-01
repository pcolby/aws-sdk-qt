// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONREADMERESPONSE_H
#define QTAWS_GETPACKAGEVERSIONREADMERESPONSE_H

#include "codeartifactresponse.h"
#include "getpackageversionreadmerequest.h"

namespace QtAws {
namespace CodeArtifact {

class GetPackageVersionReadmeResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT GetPackageVersionReadmeResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    GetPackageVersionReadmeResponse(const GetPackageVersionReadmeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPackageVersionReadmeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionReadmeResponse)
    Q_DISABLE_COPY(GetPackageVersionReadmeResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
