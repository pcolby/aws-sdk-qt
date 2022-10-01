// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERSERVICERESPONSE_H
#define QTAWS_DELETECONTAINERSERVICERESPONSE_H

#include "lightsailresponse.h"
#include "deletecontainerservicerequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerServiceResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteContainerServiceResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteContainerServiceResponse(const DeleteContainerServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContainerServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerServiceResponse)
    Q_DISABLE_COPY(DeleteContainerServiceResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
