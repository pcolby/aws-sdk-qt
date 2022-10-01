// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPACKAGEORIGINCONFIGURATIONRESPONSE_H
#define QTAWS_PUTPACKAGEORIGINCONFIGURATIONRESPONSE_H

#include "codeartifactresponse.h"
#include "putpackageoriginconfigurationrequest.h"

namespace QtAws {
namespace CodeArtifact {

class PutPackageOriginConfigurationResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT PutPackageOriginConfigurationResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    PutPackageOriginConfigurationResponse(const PutPackageOriginConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPackageOriginConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPackageOriginConfigurationResponse)
    Q_DISABLE_COPY(PutPackageOriginConfigurationResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
