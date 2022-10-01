// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESSORESPONSE_H
#define QTAWS_ENABLESSORESPONSE_H

#include "directoryserviceresponse.h"
#include "enablessorequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableSsoResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT EnableSsoResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    EnableSsoResponse(const EnableSsoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableSsoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSsoResponse)
    Q_DISABLE_COPY(EnableSsoResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
