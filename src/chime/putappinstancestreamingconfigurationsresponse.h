// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_H
#define QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_H

#include "chimeresponse.h"
#include "putappinstancestreamingconfigurationsrequest.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceStreamingConfigurationsResponsePrivate;

class QTAWSCHIME_EXPORT PutAppInstanceStreamingConfigurationsResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutAppInstanceStreamingConfigurationsResponse(const PutAppInstanceStreamingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppInstanceStreamingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppInstanceStreamingConfigurationsResponse)
    Q_DISABLE_COPY(PutAppInstanceStreamingConfigurationsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
