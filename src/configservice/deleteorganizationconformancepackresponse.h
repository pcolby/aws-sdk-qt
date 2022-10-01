// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFORMANCEPACKRESPONSE_H
#define QTAWS_DELETEORGANIZATIONCONFORMANCEPACKRESPONSE_H

#include "configserviceresponse.h"
#include "deleteorganizationconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConformancePackResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteOrganizationConformancePackResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteOrganizationConformancePackResponse(const DeleteOrganizationConformancePackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOrganizationConformancePackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationConformancePackResponse)
    Q_DISABLE_COPY(DeleteOrganizationConformancePackResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
