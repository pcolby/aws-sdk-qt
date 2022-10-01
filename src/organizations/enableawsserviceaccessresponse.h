// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSSERVICEACCESSRESPONSE_H
#define QTAWS_ENABLEAWSSERVICEACCESSRESPONSE_H

#include "organizationsresponse.h"
#include "enableawsserviceaccessrequest.h"

namespace QtAws {
namespace Organizations {

class EnableAWSServiceAccessResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT EnableAWSServiceAccessResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    EnableAWSServiceAccessResponse(const EnableAWSServiceAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAWSServiceAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAWSServiceAccessResponse)
    Q_DISABLE_COPY(EnableAWSServiceAccessResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
