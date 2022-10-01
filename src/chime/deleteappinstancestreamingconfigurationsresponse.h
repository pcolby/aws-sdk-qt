// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_H
#define QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSRESPONSE_H

#include "chimeresponse.h"
#include "deleteappinstancestreamingconfigurationsrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceStreamingConfigurationsResponsePrivate;

class QTAWSCHIME_EXPORT DeleteAppInstanceStreamingConfigurationsResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteAppInstanceStreamingConfigurationsResponse(const DeleteAppInstanceStreamingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppInstanceStreamingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceStreamingConfigurationsResponse)
    Q_DISABLE_COPY(DeleteAppInstanceStreamingConfigurationsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
