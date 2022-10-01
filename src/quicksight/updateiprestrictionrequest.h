// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPRESTRICTIONREQUEST_H
#define QTAWS_UPDATEIPRESTRICTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateIpRestrictionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateIpRestrictionRequest : public QuickSightRequest {

public:
    UpdateIpRestrictionRequest(const UpdateIpRestrictionRequest &other);
    UpdateIpRestrictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIpRestrictionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
