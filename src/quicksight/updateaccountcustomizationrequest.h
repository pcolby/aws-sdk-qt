// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTCUSTOMIZATIONREQUEST_H
#define QTAWS_UPDATEACCOUNTCUSTOMIZATIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAccountCustomizationRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateAccountCustomizationRequest : public QuickSightRequest {

public:
    UpdateAccountCustomizationRequest(const UpdateAccountCustomizationRequest &other);
    UpdateAccountCustomizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountCustomizationRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
