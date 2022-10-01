// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONRESPONSE_H
#define QTAWS_CREATEAPPLICATIONRESPONSE_H

#include "appconfigresponse.h"
#include "createapplicationrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateApplicationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateApplicationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateApplicationResponse(const CreateApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationResponse)
    Q_DISABLE_COPY(CreateApplicationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
