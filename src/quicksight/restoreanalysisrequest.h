// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREANALYSISREQUEST_H
#define QTAWS_RESTOREANALYSISREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class RestoreAnalysisRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT RestoreAnalysisRequest : public QuickSightRequest {

public:
    RestoreAnalysisRequest(const RestoreAnalysisRequest &other);
    RestoreAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
