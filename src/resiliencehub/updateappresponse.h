// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPRESPONSE_H
#define QTAWS_UPDATEAPPRESPONSE_H

#include "resiliencehubresponse.h"
#include "updateapprequest.h"

namespace QtAws {
namespace ResilienceHub {

class UpdateAppResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT UpdateAppResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    UpdateAppResponse(const UpdateAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAppResponse)
    Q_DISABLE_COPY(UpdateAppResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
