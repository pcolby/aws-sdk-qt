// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_H
#define QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_H

#include "chimeresponse.h"
#include "getappinstancestreamingconfigurationsrequest.h"

namespace QtAws {
namespace Chime {

class GetAppInstanceStreamingConfigurationsResponsePrivate;

class QTAWSCHIME_EXPORT GetAppInstanceStreamingConfigurationsResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetAppInstanceStreamingConfigurationsResponse(const GetAppInstanceStreamingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppInstanceStreamingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppInstanceStreamingConfigurationsResponse)
    Q_DISABLE_COPY(GetAppInstanceStreamingConfigurationsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
