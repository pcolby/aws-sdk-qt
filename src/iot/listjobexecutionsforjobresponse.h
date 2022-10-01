// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORJOBRESPONSE_H
#define QTAWS_LISTJOBEXECUTIONSFORJOBRESPONSE_H

#include "iotresponse.h"
#include "listjobexecutionsforjobrequest.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForJobResponsePrivate;

class QTAWSIOT_EXPORT ListJobExecutionsForJobResponse : public IoTResponse {
    Q_OBJECT

public:
    ListJobExecutionsForJobResponse(const ListJobExecutionsForJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobExecutionsForJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobExecutionsForJobResponse)
    Q_DISABLE_COPY(ListJobExecutionsForJobResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
