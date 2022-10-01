// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTORMODELANALYSISREQUEST_H
#define QTAWS_STARTDETECTORMODELANALYSISREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class StartDetectorModelAnalysisRequestPrivate;

class QTAWSIOTEVENTS_EXPORT StartDetectorModelAnalysisRequest : public IoTEventsRequest {

public:
    StartDetectorModelAnalysisRequest(const StartDetectorModelAnalysisRequest &other);
    StartDetectorModelAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDetectorModelAnalysisRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
