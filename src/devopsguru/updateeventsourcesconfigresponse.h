// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCESCONFIGRESPONSE_H
#define QTAWS_UPDATEEVENTSOURCESCONFIGRESPONSE_H

#include "devopsgururesponse.h"
#include "updateeventsourcesconfigrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateEventSourcesConfigResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateEventSourcesConfigResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    UpdateEventSourcesConfigResponse(const UpdateEventSourcesConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventSourcesConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventSourcesConfigResponse)
    Q_DISABLE_COPY(UpdateEventSourcesConfigResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
