// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEPERMISSIONSREQUEST_H
#define QTAWS_UPDATETEMPLATEPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplatePermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateTemplatePermissionsRequest : public QuickSightRequest {

public:
    UpdateTemplatePermissionsRequest(const UpdateTemplatePermissionsRequest &other);
    UpdateTemplatePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplatePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
