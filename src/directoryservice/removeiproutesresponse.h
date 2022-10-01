// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEIPROUTESRESPONSE_H
#define QTAWS_REMOVEIPROUTESRESPONSE_H

#include "directoryserviceresponse.h"
#include "removeiproutesrequest.h"

namespace QtAws {
namespace DirectoryService {

class RemoveIpRoutesResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RemoveIpRoutesResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    RemoveIpRoutesResponse(const RemoveIpRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveIpRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveIpRoutesResponse)
    Q_DISABLE_COPY(RemoveIpRoutesResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
