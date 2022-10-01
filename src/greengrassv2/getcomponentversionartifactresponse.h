// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTVERSIONARTIFACTRESPONSE_H
#define QTAWS_GETCOMPONENTVERSIONARTIFACTRESPONSE_H

#include "greengrassv2response.h"
#include "getcomponentversionartifactrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentVersionArtifactResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT GetComponentVersionArtifactResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    GetComponentVersionArtifactResponse(const GetComponentVersionArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComponentVersionArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentVersionArtifactResponse)
    Q_DISABLE_COPY(GetComponentVersionArtifactResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
