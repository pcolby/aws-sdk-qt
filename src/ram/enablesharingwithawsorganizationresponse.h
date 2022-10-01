// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESHARINGWITHAWSORGANIZATIONRESPONSE_H
#define QTAWS_ENABLESHARINGWITHAWSORGANIZATIONRESPONSE_H

#include "ramresponse.h"
#include "enablesharingwithawsorganizationrequest.h"

namespace QtAws {
namespace Ram {

class EnableSharingWithAwsOrganizationResponsePrivate;

class QTAWSRAM_EXPORT EnableSharingWithAwsOrganizationResponse : public RamResponse {
    Q_OBJECT

public:
    EnableSharingWithAwsOrganizationResponse(const EnableSharingWithAwsOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableSharingWithAwsOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSharingWithAwsOrganizationResponse)
    Q_DISABLE_COPY(EnableSharingWithAwsOrganizationResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
