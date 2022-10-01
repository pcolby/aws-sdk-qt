// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELOGGINGRESPONSE_H
#define QTAWS_ENABLELOGGINGRESPONSE_H

#include "redshiftresponse.h"
#include "enableloggingrequest.h"

namespace QtAws {
namespace Redshift {

class EnableLoggingResponsePrivate;

class QTAWSREDSHIFT_EXPORT EnableLoggingResponse : public RedshiftResponse {
    Q_OBJECT

public:
    EnableLoggingResponse(const EnableLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableLoggingResponse)
    Q_DISABLE_COPY(EnableLoggingResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
