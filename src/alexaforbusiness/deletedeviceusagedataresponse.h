// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEUSAGEDATARESPONSE_H
#define QTAWS_DELETEDEVICEUSAGEDATARESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deletedeviceusagedatarequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceUsageDataResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteDeviceUsageDataResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteDeviceUsageDataResponse(const DeleteDeviceUsageDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeviceUsageDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceUsageDataResponse)
    Q_DISABLE_COPY(DeleteDeviceUsageDataResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
