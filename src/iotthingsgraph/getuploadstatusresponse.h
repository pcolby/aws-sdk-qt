// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADSTATUSRESPONSE_H
#define QTAWS_GETUPLOADSTATUSRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "getuploadstatusrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetUploadStatusResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT GetUploadStatusResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    GetUploadStatusResponse(const GetUploadStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUploadStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUploadStatusResponse)
    Q_DISABLE_COPY(GetUploadStatusResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
