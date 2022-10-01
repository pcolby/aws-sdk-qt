// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANALYSISREQUEST_H
#define QTAWS_UPDATEANALYSISREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAnalysisRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateAnalysisRequest : public QuickSightRequest {

public:
    UpdateAnalysisRequest(const UpdateAnalysisRequest &other);
    UpdateAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
