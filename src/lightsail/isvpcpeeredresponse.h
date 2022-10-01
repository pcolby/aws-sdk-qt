// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISVPCPEEREDRESPONSE_H
#define QTAWS_ISVPCPEEREDRESPONSE_H

#include "lightsailresponse.h"
#include "isvpcpeeredrequest.h"

namespace QtAws {
namespace Lightsail {

class IsVpcPeeredResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT IsVpcPeeredResponse : public LightsailResponse {
    Q_OBJECT

public:
    IsVpcPeeredResponse(const IsVpcPeeredRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IsVpcPeeredRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IsVpcPeeredResponse)
    Q_DISABLE_COPY(IsVpcPeeredResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
