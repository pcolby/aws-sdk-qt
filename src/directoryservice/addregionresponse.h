// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDREGIONRESPONSE_H
#define QTAWS_ADDREGIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "addregionrequest.h"

namespace QtAws {
namespace DirectoryService {

class AddRegionResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT AddRegionResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    AddRegionResponse(const AddRegionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddRegionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRegionResponse)
    Q_DISABLE_COPY(AddRegionResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
