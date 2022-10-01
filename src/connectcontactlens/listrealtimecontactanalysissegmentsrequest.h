// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSREQUEST_H
#define QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSREQUEST_H

#include "connectcontactlensrequest.h"

namespace QtAws {
namespace ConnectContactLens {

class ListRealtimeContactAnalysisSegmentsRequestPrivate;

class QTAWSCONNECTCONTACTLENS_EXPORT ListRealtimeContactAnalysisSegmentsRequest : public ConnectContactLensRequest {

public:
    ListRealtimeContactAnalysisSegmentsRequest(const ListRealtimeContactAnalysisSegmentsRequest &other);
    ListRealtimeContactAnalysisSegmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRealtimeContactAnalysisSegmentsRequest)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
