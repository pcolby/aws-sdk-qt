// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTGRIDSESSIONARTIFACTSRESPONSE_H
#define QTAWS_LISTTESTGRIDSESSIONARTIFACTSRESPONSE_H

#include "devicefarmresponse.h"
#include "listtestgridsessionartifactsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListTestGridSessionArtifactsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListTestGridSessionArtifactsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListTestGridSessionArtifactsResponse(const ListTestGridSessionArtifactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTestGridSessionArtifactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestGridSessionArtifactsResponse)
    Q_DISABLE_COPY(ListTestGridSessionArtifactsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
