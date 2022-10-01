// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISPERMISSIONSREQUEST_H
#define QTAWS_UPDATEANALYSISPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateAnalysisPermissionsRequest : public QuickSightRequest {

public:
    UpdateAnalysisPermissionsRequest(const UpdateAnalysisPermissionsRequest &other);
    UpdateAnalysisPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnalysisPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
