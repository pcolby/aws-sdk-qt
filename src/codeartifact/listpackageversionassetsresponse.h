// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONASSETSRESPONSE_H
#define QTAWS_LISTPACKAGEVERSIONASSETSRESPONSE_H

#include "codeartifactresponse.h"
#include "listpackageversionassetsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionAssetsResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackageVersionAssetsResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    ListPackageVersionAssetsResponse(const ListPackageVersionAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackageVersionAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageVersionAssetsResponse)
    Q_DISABLE_COPY(ListPackageVersionAssetsResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
