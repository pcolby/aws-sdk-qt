// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESHARINGWITHAWSORGANIZATIONREQUEST_H
#define QTAWS_ENABLESHARINGWITHAWSORGANIZATIONREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class EnableSharingWithAwsOrganizationRequestPrivate;

class QTAWSRAM_EXPORT EnableSharingWithAwsOrganizationRequest : public RamRequest {

public:
    EnableSharingWithAwsOrganizationRequest(const EnableSharingWithAwsOrganizationRequest &other);
    EnableSharingWithAwsOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSharingWithAwsOrganizationRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
