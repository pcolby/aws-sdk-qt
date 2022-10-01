// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDIPROUTESRESPONSE_H
#define QTAWS_ADDIPROUTESRESPONSE_H

#include "directoryserviceresponse.h"
#include "addiproutesrequest.h"

namespace QtAws {
namespace DirectoryService {

class AddIpRoutesResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT AddIpRoutesResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    AddIpRoutesResponse(const AddIpRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddIpRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddIpRoutesResponse)
    Q_DISABLE_COPY(AddIpRoutesResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
