// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESPONSE_H
#define QTAWS_UPDATEAPPLICATIONRESPONSE_H

#include "appconfigresponse.h"
#include "updateapplicationrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateApplicationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT UpdateApplicationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    UpdateApplicationResponse(const UpdateApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationResponse)
    Q_DISABLE_COPY(UpdateApplicationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
