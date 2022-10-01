// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELSRESPONSE_H
#define QTAWS_ADDNOTIFICATIONCHANNELSRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "addnotificationchannelsrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class AddNotificationChannelsResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT AddNotificationChannelsResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    AddNotificationChannelsResponse(const AddNotificationChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddNotificationChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddNotificationChannelsResponse)
    Q_DISABLE_COPY(AddNotificationChannelsResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
