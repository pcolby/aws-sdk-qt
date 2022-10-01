// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDBLOGFILEPORTIONRESPONSE_H
#define QTAWS_DOWNLOADDBLOGFILEPORTIONRESPONSE_H

#include "rdsresponse.h"
#include "downloaddblogfileportionrequest.h"

namespace QtAws {
namespace Rds {

class DownloadDBLogFilePortionResponsePrivate;

class QTAWSRDS_EXPORT DownloadDBLogFilePortionResponse : public RdsResponse {
    Q_OBJECT

public:
    DownloadDBLogFilePortionResponse(const DownloadDBLogFilePortionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DownloadDBLogFilePortionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DownloadDBLogFilePortionResponse)
    Q_DISABLE_COPY(DownloadDBLogFilePortionResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
