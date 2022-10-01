// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISREQUEST_H
#define QTAWS_DELETEANALYSISREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteAnalysisRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteAnalysisRequest : public QuickSightRequest {

public:
    DeleteAnalysisRequest(const DeleteAnalysisRequest &other);
    DeleteAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
