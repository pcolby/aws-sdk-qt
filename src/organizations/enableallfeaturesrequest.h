// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALLFEATURESREQUEST_H
#define QTAWS_ENABLEALLFEATURESREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class EnableAllFeaturesRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT EnableAllFeaturesRequest : public OrganizationsRequest {

public:
    EnableAllFeaturesRequest(const EnableAllFeaturesRequest &other);
    EnableAllFeaturesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAllFeaturesRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
