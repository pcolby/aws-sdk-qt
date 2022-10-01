// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPROUTESRESPONSE_H
#define QTAWS_LISTIPROUTESRESPONSE_H

#include "directoryserviceresponse.h"
#include "listiproutesrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListIpRoutesResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListIpRoutesResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    ListIpRoutesResponse(const ListIpRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIpRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIpRoutesResponse)
    Q_DISABLE_COPY(ListIpRoutesResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
