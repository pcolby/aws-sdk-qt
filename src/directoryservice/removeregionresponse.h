// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONRESPONSE_H
#define QTAWS_REMOVEREGIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "removeregionrequest.h"

namespace QtAws {
namespace DirectoryService {

class RemoveRegionResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RemoveRegionResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    RemoveRegionResponse(const RemoveRegionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveRegionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRegionResponse)
    Q_DISABLE_COPY(RemoveRegionResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
