// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARTIFACTSRESPONSE_H
#define QTAWS_LISTARTIFACTSRESPONSE_H

#include "devicefarmresponse.h"
#include "listartifactsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListArtifactsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListArtifactsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListArtifactsResponse(const ListArtifactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListArtifactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArtifactsResponse)
    Q_DISABLE_COPY(ListArtifactsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
