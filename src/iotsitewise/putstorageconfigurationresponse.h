// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTORAGECONFIGURATIONRESPONSE_H
#define QTAWS_PUTSTORAGECONFIGURATIONRESPONSE_H

#include "iotsitewiseresponse.h"
#include "putstorageconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class PutStorageConfigurationResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT PutStorageConfigurationResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    PutStorageConfigurationResponse(const PutStorageConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutStorageConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStorageConfigurationResponse)
    Q_DISABLE_COPY(PutStorageConfigurationResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
