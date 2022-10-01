// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELOGGINGRESPONSE_H
#define QTAWS_DISABLELOGGINGRESPONSE_H

#include "redshiftresponse.h"
#include "disableloggingrequest.h"

namespace QtAws {
namespace Redshift {

class DisableLoggingResponsePrivate;

class QTAWSREDSHIFT_EXPORT DisableLoggingResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DisableLoggingResponse(const DisableLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableLoggingResponse)
    Q_DISABLE_COPY(DisableLoggingResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
