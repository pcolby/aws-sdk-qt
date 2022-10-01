// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTORGANIZATIONCONFORMANCEPACKRESPONSE_H
#define QTAWS_PUTORGANIZATIONCONFORMANCEPACKRESPONSE_H

#include "configserviceresponse.h"
#include "putorganizationconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class PutOrganizationConformancePackResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutOrganizationConformancePackResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutOrganizationConformancePackResponse(const PutOrganizationConformancePackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutOrganizationConformancePackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutOrganizationConformancePackResponse)
    Q_DISABLE_COPY(PutOrganizationConformancePackResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
