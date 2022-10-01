// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMAPPLICATIONRESPONSE_H
#define QTAWS_DELETEPLATFORMAPPLICATIONRESPONSE_H

#include "snsresponse.h"
#include "deleteplatformapplicationrequest.h"

namespace QtAws {
namespace Sns {

class DeletePlatformApplicationResponsePrivate;

class QTAWSSNS_EXPORT DeletePlatformApplicationResponse : public SnsResponse {
    Q_OBJECT

public:
    DeletePlatformApplicationResponse(const DeletePlatformApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePlatformApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlatformApplicationResponse)
    Q_DISABLE_COPY(DeletePlatformApplicationResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
