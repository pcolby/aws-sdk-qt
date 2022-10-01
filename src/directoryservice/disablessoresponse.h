// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESSORESPONSE_H
#define QTAWS_DISABLESSORESPONSE_H

#include "directoryserviceresponse.h"
#include "disablessorequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableSsoResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableSsoResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DisableSsoResponse(const DisableSsoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableSsoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSsoResponse)
    Q_DISABLE_COPY(DisableSsoResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
