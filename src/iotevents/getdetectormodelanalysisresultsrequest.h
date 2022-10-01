// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORMODELANALYSISRESULTSREQUEST_H
#define QTAWS_GETDETECTORMODELANALYSISRESULTSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class GetDetectorModelAnalysisResultsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT GetDetectorModelAnalysisResultsRequest : public IoTEventsRequest {

public:
    GetDetectorModelAnalysisResultsRequest(const GetDetectorModelAnalysisResultsRequest &other);
    GetDetectorModelAnalysisResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorModelAnalysisResultsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
