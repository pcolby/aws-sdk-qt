// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFORMANCEPACKRESPONSE_H
#define QTAWS_DELETECONFORMANCEPACKRESPONSE_H

#include "configserviceresponse.h"
#include "deleteconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConformancePackResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConformancePackResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteConformancePackResponse(const DeleteConformancePackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConformancePackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConformancePackResponse)
    Q_DISABLE_COPY(DeleteConformancePackResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
