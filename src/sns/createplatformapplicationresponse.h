// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMAPPLICATIONRESPONSE_H
#define QTAWS_CREATEPLATFORMAPPLICATIONRESPONSE_H

#include "snsresponse.h"
#include "createplatformapplicationrequest.h"

namespace QtAws {
namespace Sns {

class CreatePlatformApplicationResponsePrivate;

class QTAWSSNS_EXPORT CreatePlatformApplicationResponse : public SnsResponse {
    Q_OBJECT

public:
    CreatePlatformApplicationResponse(const CreatePlatformApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlatformApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlatformApplicationResponse)
    Q_DISABLE_COPY(CreatePlatformApplicationResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
