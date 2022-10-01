// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSSERVICEACCESSRESPONSE_H
#define QTAWS_DISABLEAWSSERVICEACCESSRESPONSE_H

#include "organizationsresponse.h"
#include "disableawsserviceaccessrequest.h"

namespace QtAws {
namespace Organizations {

class DisableAWSServiceAccessResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DisableAWSServiceAccessResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DisableAWSServiceAccessResponse(const DisableAWSServiceAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableAWSServiceAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAWSServiceAccessResponse)
    Q_DISABLE_COPY(DisableAWSServiceAccessResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
