// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRESPONSE_H
#define QTAWS_PUBLISHRESPONSE_H

#include "iotdataplaneresponse.h"
#include "publishrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class PublishResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT PublishResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    PublishResponse(const PublishRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishResponse)
    Q_DISABLE_COPY(PublishResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
